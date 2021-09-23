#include<iostream>
using namespace std;

void SieveOfErathosthenes(int n)
{
     int arr[n+1]={0};
     for(int i=2;i<=n;i++)
     {
         if(arr[i]==0)
         {
             for(int j=i*i;j<=n;j=j+i)
             {
                 arr[j] = 1;
             }
         }
     }
     for(int i=2;i<=n;i++)
     {
         if(arr[i]==0)
         {
             cout<<i<<" ";
         }
     }
     cout<<endl;
     return;
}

int main()
{
    int n;
    cin>>n;
    SieveOfErathosthenes(n);
    return 0;
}