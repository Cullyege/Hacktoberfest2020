#include<bits/stdc++.h>

using namespace std;

int jump_search(int a[], int n, int find)
{
    int step = sqrt(n);
    int pre_step = 0;
    while (a[min(step, n) - 1]  < find) 
    { 
        pre_step = step; 
        step += sqrt(n); 
        if (pre_step >= n)
        {
            return -1;	
        } 
    }
    while(a[pre_step] < find)
    {
        pre_step++;
        if(pre_step == min(step,n))
        {
            return -1;
        }
    }
    if(a[pre_step] == find)
    {
        return pre_step;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n,search;
    cout << "Enter no. of elements in an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in an array in increasing order: ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a number to be searched: ";
    cin >> search;
    int result = jump_search(arr,n,search);
    if(result == -1)
    {
        cout << search << " is not present in the array." << endl;
    }
    else
    {
        cout << search << " is present at index no " << result+1 << endl;
    }
    return 0;
}