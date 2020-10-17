#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    int i, j, temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int array[50], i, num;
    cout<<"Enter size of array: ";
    cin>>num;
    for(i=0; i<num; i++)
    {
        cout<<"Enter element at position "<<i<<" : ";
        cin>>array[i];
    }
    bubble_sort(array, num);
    cout<<"Sorted array: ";
    for(i=0; i<num; i++)
    {
        cout<<array[i]<<"  ";
    }
    return 0;
}