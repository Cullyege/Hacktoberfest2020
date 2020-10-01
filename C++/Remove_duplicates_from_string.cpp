#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the string\n";
    string s;
    cin>>s;

    unordered_map<char,int> m; //to store if a character is already present in the string

    int index=0;
    for(int i=0;i<s.length();i++)
    {
        if(m.find(s[i])==m.end())
        {
            m[s[i]]=1;
            s[index++]=s[i];
        }
    }
    string x =s.substr(0,index);
    cout<<"The string after removing duplicate characters is "<<x<<endl;
    return 0;
}
