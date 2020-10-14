#include <iostream>
using namespace std;

int max(int num[], int n);

void radix_sort(int num[], int n);

int main()
{
   int i, n;
   cout<<"Enter the number of elements: ";
    cin>>n;
   int num[n];
   cout<<"Enter the numbers: ";
   for (i = 0; i < n; i++)
   {
      cin>>num[i];
   }
   radix_sort(num, n);

   cout<<"\n The Sorted list is  : ";

   for (i = 0; i < n; i++)
      cout<< num[i]<<" ";

   cout<<"\n";
   return 0;
}

int max(int num[], int n)
{
   int max = num[0];
   for (int i = 1; i < n; i++)
      if (num[i] > max)
         max = num[i];
   return max;
}

void radix_sort(int num[], int n)
{
   int box[10][10], box_cnt[10];
   int i, j, k, r, NOP = 0, divisor = 1, lar, pass;
   lar = max(num, n);
   while (lar > 0)
   {
      NOP++;
      lar /= 10;
   }
   for (pass = 0; pass < NOP; pass++)
   {
      for (i = 0; i < 10; i++)
      {
         box_cnt[i] = 0;
      }
      for (i = 0; i < n; i++)
      {
         r = (num[i] / divisor) % 10;
         box[r][box_cnt[r]] = num[i];
         box_cnt[r] += 1;
      }
      i = 0;
      for (k = 0; k < 10; k++)
      {
         for (j = 0; j < box_cnt[k]; j++)
         {
            num[i] = box[k][j];
            i++;
         }
      }
      divisor *= 10;
      cout<<"\tAfter Pass "<< pass + 1<<": ";
      for (i = 0; i < n; i++)
         cout<<num[i]<<" ";
      cout<<"\n";
   }
}
