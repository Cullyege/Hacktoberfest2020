#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter number: ";
    cin>>a>>b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"the number after swapping: "<<a<<" "<<b;
    return 0;
}
