#include<iostream>
using namespace std;

int main()
{

   int i,j,n;
   int k=1;
   cin>>n;
   cout<<endl;

   for(i=1;i<=n;i++)
   {
        for(j=1;j<=i;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
   }
   return 0;
}