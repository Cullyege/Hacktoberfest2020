//Program to calculate permutation and combination
#include<iostream>
using namespace std;
int main()
{   int n,r;
    int npr(int,int);
    int ncr(int,int);
    cout<<"Enter the values of n and r: ";
    cin>>n>>r;
    int p=npr(n,r);
    int c=ncr(n,r);
    cout<<"Ther permutation is "<<p<<'\n';
    cout<<"The combination is "<<c<<'\n';
    system("pause");
    return 0;
}
int npr(int n,int r)
{   if(n==r)
       return 1;
    else
       return(n*npr(n-1,r));
}
int ncr(int n,int r)
{   if((r==0)||(r==n))
       return 1;
    else
       return(ncr(n-1,r-1)+ncr(n-1,r));
}
     
