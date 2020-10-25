#include <stdio.h>
#include <stdlib.h>


#include "avl.h"



/* funcao: AVL *createAVL()
   *  acao:        funcao que cria uma AVL
   *  entrada:     void
   *  saida:       ponteiro para uma AVL
   *  suposicoes:  nenhuma
*/
AVL *createAVL(void)
{
    return NULL;
}

/* funcao: Node *createNode()
   *  acao:        funcao que cria um novo no o qual devera 
   					ser inserido na arvore
   *  entrada:     elemento de informacao do novo no
   *  saida:       ponteiro para um no
   *  suposicoes:  nenhuma
*/
struct avlno *createNodeAVL(Info *inf)
{
    struct avlno *ptr;
    if((ptr=(struct avlno *)malloc(sizeof(struct avlno)))){
        ptr->info=inf;
        ptr->balance=0;
        ptr->left=NULL;
        ptr->right=NULL;
        return ptr;
    }
    return NULL;
}

/* funcao: Info *createInfo(int i)
   *  acao:        funcao que aloca espaco para um elemento de informacao
   *  entrada:     inteiro representando o novo elemento de informacao
   *  saida:       ponteiro para a area de memoria do elemento de informacao
   *  suposicoes:  nenhuma
*/
Info *createInfo(int i)
{
    Info *ptr;
    if((ptr=(Info *)malloc(sizeof(Info)))){
        ptr->value=i;
        return ptr;
    }
    return NULL;
}

/* funcao: AVL * leftAVL(AVL *avl)
   *  acao:        retorna a sub�rvore esquerda de uma �rvore avl
   *  entrada:     ponteiro para a �rvore avl (avl)
   *  saida:       ponteiro para a sub�rvore esquerda de avl
   *  suposicoes:  �rvore avl
*/
AVL *leftAVL(AVL *avl)
{
    if(isEmptyAVL(avl))return NULL;
    return avl->left;
}

/* funcao: AVL * rightAVL(AVL *avl)
   *  acao:        retorna a sub�rvore direita de uma �rvore avl
   *  entrada:     ponteiro para a �rvore avl (avl)
   *  saida:       ponteiro para a sub�rvore direita de avl
   *  suposicoes:  �rvore avl
*/

AVL *rightAVL(AVL *avl)
{
    if(isEmptyAVL(avl))return NULL;
    return avl->right;
}

/* funcao: Info * rootAVL(AVL *avl)
   *  acao:        retorna o elemento de informacao da raiz de uma �rvore avl
   *  entrada:     ponteiro para a �rvore avl (avl)
   *  saida:       ponteiro para o elemento de informacao da raiz da �rvore avl
   *  suposicoes:  �rvore avl
*/
Info *rootAVL(AVL *avl)
{
    if(isEmptyAVL(avl))return NULL;
    return avl->info;
}

/* funcao: int isEmptyAVL(AVL *avl)
   *  acao:        verifica se uma �rvore avl esta vazia ou nula
   *  entrada:     ponteiro para a �rvore avl (avl)
   *  saida:       1, se a arvore avl � vazia ou nula
				   0, caso contrario
   *  suposicoes:  �rvore avl
*/
int isEmptyAVL(AVL *avl)
{
    if(!avl)return 1;
    return 0;
}

/* funcao: AVL searchAVL(AVL *avl,Info *inf)
   *  acao:        busca por um elemento de informacao na arvore avl
   *  entrada:     ponteiro para a �rvore avl (avl) e um ponteiro
   					para o elemento de informa��o (inf)
   *  saida:       pontiro para o no da arvore que contem o elemento
   					 de informacao buscado
				   NULL, caso contrario
   *  suposicoes:  �rvore avl
*/
AVL *searchAVL(AVL *avl,Info *inf)
{
    if(!inf || !avl ) return NULL;
    if(avl->info->value==inf->value) return avl;
    else if((rootAVL(avl))->value>inf->value)return searchAVL(leftAVL(avl),inf);
    else return searchAVL(rightAVL(avl),inf);
}


/* funcao: int heightAVL(AVL *avl)
   *  acao:        calcula a altura de uma arvore avl
   *  entrada:     ponteiro para a �rvore avl (avl)
   *  saida:       inteiro representando a altura da arvore
   *  suposicoes:  �rvore avl
*/
int heightAVL(AVL *avl)
{
    int l,r;
    if(!avl)return 0;
    l=1+heightAVL(leftAVL(avl));
    r=1+heightAVL(rightAVL(avl));
    if(r>l)return r;
    else return l;
}

  
//***********************************
/* funcao: int isAVL(AVL *avl) 
   *  acao:        verifica se eh arvore avl
   *  entrada:     endere�o de um ponteiro para a �rvore avl (avl)
   *  saida:		1, se a diferenca de altura entre as subarvores esquerda e direita eh <=1
   					0, caso contrario
   *  suposicoes:  �rvore avl
*/
int isAVL(AVL *avl) {
  if (avl == NULL) return 1;
  return (abs(heightAVL(leftAVL(avl)) - heightAVL(rightAVL(avl))))<=1;
}

/* funcao: int insertAVL(AVL **avl,Info *inf)
   *  acao:        insere um elemento de informacao na arvore avl
   *  entrada:     endere�o de um ponteiro para a �rvore avl (avl)
   			 e um ponteiro para o elemento de informa��o a ser inserido (inf)
   *  saida:		1, caso a inser��o ocorra com sucesso
   					0, caso contrario
   *  suposicoes:  �rvore avl
*/
int insertAVL(AVL **avl,Info *inf)
{
	int growup=0;
	return auxInsertAVL(avl,inf,&growup);
}

//growup indica que apos a insercao a avl cresceu
int auxInsertAVL(AVL** avl, Info *inf, int *growup)
{
	if (*avl==NULL) 
	{
		printf("\nauxInsertAVL:1");
    	*avl=createNodeAVL(inf);
    	*growup=1;
		return 1;
	}
	//se o n� j� existe, o mesmo n�o ser� inserido
    if (inf->value==(*avl)->info->value) return 0;
	
	// insercao na sub-arvore esquerda
	if (inf->value<(*avl)->info->value)
	{
		printf("\nauxInsertAVL:2");
    	if (auxInsertAVL(&(*avl)->left,inf,growup))
		{
		    if (*growup)
			{
				switch ((*avl)->balance)
				{
					case 1:
						if ((leftAVL(*avl))->balance == 1)
					    	LL_RotationAVL(avl);
					 	else
							LR_RotationAVL(avl);
						*growup = 0;
						break;
					case 0:
						(*avl)->balance=1;
						*growup = 1;
						break;
					case -1:
						(*avl)->balance = 0;
						*growup= 0;
						break;
				}
			}
			return 1;
		}
		else return 0;
	}
	
	// insercao na sub-arvore direita
  	if(inf->value>(*avl)->info->value)
	{
		if(	auxInsertAVL(&(*avl)->right,inf,growup))
		{
			printf("\nauxInsertAVL:3");
			if(*growup)
			{
				switch ((*avl)->balance)
				{
					case -1:
						if ((rightAVL(*avl))->balance == -1)
							RR_RotationAVL(avl);
						else
							RL_RotationAVL(avl);
						*growup = 0;
						break;
					case 1:
						(*avl)->balance = 0;
						*growup = 0;
						break;
					case 0:
						(*avl)->balance = -1;
						*growup = 1;
						break;
				}
			}
			return 1;
		}
		else return 0;
	}
	return 0;
}

void LL_RotationAVL(AVL** avl)
{
	printf("\nLL_RotationAVL:1");
	AVL* b = *avl;
	AVL* a = b->left;
	b->left = a->right;
	a->right = b;
	a->balance = 0;
	b->balance = 0;
	*avl = a;
}

void RR_RotationAVL(AVL** avl)
{
	printf("\nRR_RotationAVL:1");
	AVL* a = *avl;
	AVL* b = a->right;
	a->right = b->left;
	b->left = a;
	a->balance = 0;
	b->balance = 0;
	*avl = b;
}

void LR_RotationAVL(AVL** avl)
{
	printf("\nLR_RotationAVL:1");
	AVL *c = *avl;
	AVL *a = c->left;
	AVL *b = a->right;
	
	c->left = b->right;
	a->right = b->left;
	b->left = a;
	b->right = c;
	switch(b->balance)
	{
	  case -1:
		a->balance = 0;
		c->balance = 1;
		break;
	  case 0:
		a->balance = 0;
		c->balance = 0;
		break;
	  case +1:
		a->balance = -1;
		c->balance = 0;
		break;
	}
	b->balance = 0;
	*avl = b;
}

void RL_RotationAVL(AVL** avl)
{
	printf("\nLR_RotationAVL:1");
	AVL *a = *avl;
	AVL *c = a->right;
	AVL *b = c->left;
	
	c->left = b->right;
	a->right = b->left;
	b->left = a;
	b->right = c;
	switch(b->balance)
	{
		case -1:
		a->balance = 0;
		c->balance = 1;
		break;
		case 0:
		a->balance = 0;
		c->balance = 0;
		break;
		case +1:
		a->balance = -1;
		c->balance = 0;
		break;
	}
	b->balance = 0;
	*avl = b;  
}


/* funcao: AVL * deleteAVL(AVL *avl,Info *inf)
   *  acao:        eliminar um elemento de informacao da arvore, e mantem a arvore avl
   *  entrada:     ponteiro para a arvore binaria avl e ponteiro para o elemento de informacao a ser deletado inf
   *  saida:       ponteiro para a arvore com o elemento de informacao deletado
   *  suposicoes:  arvore avl
   *  obs: A funcao deleteAVL basicamente fixa um growup inicial e chama a auxDeleteAVL que de fato exclue o elemento.
*/
AVL *deleteAVL(AVL *avl, Info *inf){
    int growup=0;
    return auxDeleteAVL(avl,inf,&growup);
}

//auxiliar para funcao deleteAVL
AVL *auxDeleteAVL(AVL *avl, Info *inf, int *growup){
    AVL *arv,*aux;
    int bal;

    if(!inf || !avl){
        printf("\nAlgo deu errado e nao foi possivel remover o elemento.\n");
        return avl;
    }

    if(inf->value<avl->info->value){
        avl->left=auxDeleteAVL(avl->left,inf,growup);

        if(*growup){
            if(avl->balance == 1) avl->balance=0;
            else if(avl->balance == 0){
				avl->balance=-1;
                growup=0;
			}
            else if(avl->balance == -1){
                    aux=avl->right;
                    bal=aux->balance;
                    if(bal<=0) RR_RotationAVL(&avl);
                    else RL_RotationAVL(&avl);
            }
        }
    }

    else{
        if(inf->value>avl->info->value){
            avl->right=auxDeleteAVL(avl->right,inf,growup);
            if(*growup){
                if(avl->balance == -1) avl->balance=0;
				else if(avl->balance == 0){
                        avl->balance=+1;
                        *growup=0;
				}
				else if(avl->balance == 1){
                        aux=avl->left;
                        bal=aux->balance;
                        if(bal>=0) LL_RotationAVL(&avl);
                        else LR_RotationAVL(&avl);
                }
            }
        }
        else{
            arv=avl;
            if(arv->right==NULL){
                avl=arv->left;
                *growup=1;
            }
            else{
                if(arv->left==NULL){
                    avl=arv->right;
                    *growup=1;
                }
                else{
                    aux=findLargestElementAVL(leftAVL(avl));
                    avl->info->value=aux->info->value;
                    inf=aux->info;
                    arv=NULL;
                    avl->left=auxDeleteAVL(leftAVL(avl),inf,growup);

                    if(*growup)
                        if(avl->balance == -1)  avl->balance=0;
                        else if(avl->balance == 0){
                                avl->balance=+1;
                                *growup=0;
						}
						else if(avl->balance == 1){
                                aux=avl->left;
                                bal=aux->balance;
                                if(bal>=0) LL_RotationAVL(&avl);
                                else LR_RotationAVL(&avl);
                        }
                }
            }
            free(arv);
        }
    }
    return avl;
}
/*********************************************************************************************/    

/* funcao: void printAVL(AVL *avl)
   *  acao:        imprime os elementos de informa��o considerando o caminho em profundidade da arvore
   *  entrada:     ponteiro para a �rvore binaria avl
   *  saida:       void
   *  suposicoes:  �rvore avl
*/
void printAVL(AVL *avl) 
{
	
	if(isEmptyAVL(avl))return;
	auxprintAVL(leftAVL(avl));
    printf(" %d", (rootAVL(avl))->value);
    auxprintAVL(rightAVL(avl));
   
}

/* funcao: void auxprintAVL(AVL *avl)
   *  acao:        imprime os elementos de informa��o considerando o caminho em profundidade da arvore
   *  entrada:     ponteiro para a �rvore binaria avl
   *  saida:       void
   *  suposicoes:  �rvore avl
*/
void auxprintAVL(AVL *avl)
{
	if(isEmptyAVL(avl))return;
	
    auxprintAVL(leftAVL(avl));
    printf(" %d", (rootAVL(avl))->value);
    auxprintAVL(rightAVL(avl));
}

/* funcao: void printPreOrderAVL(AVL *avl)
   *  acao:        imprime os elementos de informa��o considerando o caminho em PreOrdem da arvore
   *  entrada:     ponteiro para a �rvore binaria avl
   *  saida:       void
   *  suposicoes:  �rvore avl
*/
void printPreOrderAVL(AVL *avl) 
{
	
	if(isEmptyAVL(avl))return;
	printf(" %d", (rootAVL(avl))->value);
	printPreOrderAVL(leftAVL(avl));
    printPreOrderAVL(rightAVL(avl));
   
}

//Funcao que busca o elemento mais a direita da arvore AVL
AVL *findLargestElementAVL(AVL *avl)
{
    if(isEmptyAVL(avl) || isEmptyAVL(rightAVL(avl)))return avl;
    else return findLargestElementAVL(rightAVL(avl));
}