#include<iostream>
using namespace std;

int main()
{
  int num;
  cin>>num;
  cout<<endl;

  for(int row=1;row<=num;row++)
  {
    for(int col=1;col<=row;col++)
       {
         if((row%2==0 && col%2==0) || (row%2!=0 && col%2!=0))
         {
             cout<<"1";
         }
         else
         {
             cout<<"0";
         }
       }
       cout<<endl;
   }
 return 0;
}
