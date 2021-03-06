//This program is wriiten by Mohammad Tanzil Idrisi

#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define fast_input ios_base::sync_with_stdio(0); cin.tie(NULL);
#define loop(i,a,b) for(int i=a;i<b;++i)
#define inf (__builtin_inf())
#define ll long long
#define ul unsigned long
#define ull unsigned long long
#define mod (1e9+7)

#define pairr pair<int,int>
#define all(v) (v).begin(),(v).end() 

#define test(t) uint t; cin>>t; while(t--)
#define print(f,size,x) loop(ppp,0,size) cout<<f[ppp]<<x;
#define print_all(f,x) for(const auto &ppp: f)  cout<<ppp<<x;
#define input(ppp,size)   loop(i,0,n) cin>>ppp[i];



int solution(int *arr, int summ, int n) //recursive
{
    if(n==0)
    {
        if(summ==0)
            return 1; //for leading zeros
        else
        {
            return 0;
        }
    }
    if(arr[n-1] <= summ)
    {
        return solution(arr, summ-arr[n-1], n-1) + solution(arr, summ, n-1);
    }
    else
    {
        return solution(arr, summ, n-1);
    }
}

int solution_dp(int *arr, int summ, int n) //dynamic programming
{
    
    int dp[n+1][summ+1];
    loop(i,1,summ+1)   dp[0][i]=0;
    
    int c=0;
    loop(i,0,n+1)
    {
        if(!arr[i]) ++c;
        dp[i][0]=1<<c; //for leading zeros
    }

    loop(i,1,n+1)
    {
        loop(j,1,summ+1)
        {
            if(arr[i-1] <= j)
            {
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][summ];
}

int main() 
{ 
    //fast_input;
    size_t n;
    cin>>n;
    int *arr = new int [n];
    int diff;
    input(arr,n);
    cin>>diff;
    // diff = s1 - s2
    // summ = s1 + s2
    // diff + summ = 2*s1
    // (diff + summ)/2 = s1
    // s1 = subset with given sum
    float summ = float (accumulate(arr,arr+n,0) + diff)/2.0;
    if(summ>int(summ))
        cout<<0<<nl;
    else
        cout<<solution_dp(arr, summ, n)<<nl;
    return 0;
}