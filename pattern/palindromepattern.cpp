#include<iostream>
using namespace std;

int main()
{  
   int k;
   int i,j,num;
   cin>>num;

   for(i=1;i<=num;i++)
   {
       for(j=1;j<=num-i;j++)
       {
           cout<<"- ";
       }

       k=i;
       for(;j<=num;j++)
       {
           cout<<k--<<" ";
       }
        
       k=2;
       for(;j<=num+i-1;j++)
       {
           cout<<k++<<" ";
       }
      
       cout<<endl;
   }
    return 0;
}