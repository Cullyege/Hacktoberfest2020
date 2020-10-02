#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//this file consists only of the logic of merge sort applicable to linked list
//main function is not included

char* readline();

typedef struct SinglyLinkedListNode SinglyLinkedListNode;
typedef struct SinglyLinkedList SinglyLinkedList;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

struct SinglyLinkedList {
    SinglyLinkedListNode* head;
    SinglyLinkedListNode* tail;
};

SinglyLinkedListNode* create_singly_linked_list_node(int node_data) {
    SinglyLinkedListNode* node = malloc(sizeof(SinglyLinkedListNode));

    node->data = node_data;
    node->next = NULL;

    return node;
}

void insert_node_into_singly_linked_list(SinglyLinkedList** singly_linked_list, int node_data) {
    SinglyLinkedListNode* node = create_singly_linked_list_node(node_data);

    if (!(*singly_linked_list)->head) {
        (*singly_linked_list)->head = node;
    } else {
        (*singly_linked_list)->tail->next = node;
    }

    (*singly_linked_list)->tail = node;
}

void print_singly_linked_list(SinglyLinkedListNode* node, char* sep, FILE* fptr) {
    while (node) {
        fprintf(fptr, "%d", node->data);

        node = node->next;

        if (node) {
            fprintf(fptr, "%s", sep);
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

void divide(SinglyLinkedListNode* node,SinglyLinkedListNode** a,SinglyLinkedListNode** b){
    SinglyLinkedListNode* fast=node->next;
    SinglyLinkedListNode* slow=node;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    *a=node;
    *b=slow->next;
    slow->next=NULL;
}

SinglyLinkedListNode* merge(SinglyLinkedListNode* a,SinglyLinkedListNode* b){
    SinglyLinkedListNode* head=NULL;
    if(a==NULL)
        return b;
    else if(b==NULL)
        return a;
    if (a->data <= b->data) { 
        head = a;
        head->next=merge(a->next, b); 
    } 
    else { 
        head=b; 
        head->next = merge(a, b->next); 
    }
    return head;
}


void mergeSort(SinglyLinkedListNode** node){
    SinglyLinkedListNode* a;
    SinglyLinkedListNode* b;
    if((*node)==NULL || (*node)->next==NULL)
        return;
    divide((*node),&a,&b);
    mergeSort(&a);
    mergeSort(&b);
    *node=merge(a,b);
}


SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* node=head1;
    SinglyLinkedListNode* node2=head2;
    while(node->next){
        node=node->next;
    }
    node->next=head2;
    mergeSort(&head1);
    return head1;
}