#include<iostream>
using namespace std;

int main()
{
  

  int row,col,num;
  cin>>num;

  for(int row=1;row<=num;row++)
  {
      for(int col=1;col<=num-row;col++)
      {
          cout<<"-";
      }
     
      for(int col=1;col<=2*row-1;col++)
      {
         if(col==1 || col==2*row-1)
         {
             cout<<"*";
         }
         else
         {
             cout<<"-";
         }
      }
      cout<<endl;
  }

  for(int row=num;row>=1;row--)
  {
      for(int col=1;col<=num-row;col++)
      {
          cout<<"-";
      }
     
      for(int col=1;col<=2*row-1;col++)
      {
         if(col==1 || col==2*row-1)
         {
             cout<<"*";
         }
         else
         {
             cout<<"-";
         }
      }
      cout<<endl;
  }
return 0;

}
