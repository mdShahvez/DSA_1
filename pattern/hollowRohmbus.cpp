#include<iostream>
using namespace std;

int main()
{
  int num,row,col;
  cin>>num;

  for(int row=1;row<=num;row++)
  {
      for(int col=1;col<=num-row;col++)
      {
          cout<<"-";
      }

      for(int col=1;col<=num;col++)
      {
          if(row==1 || col==1 || row==num || col == num) 
          {
              cout<<"* ";
          }
          else
          {
              cout<<"- ";
          }

          
      }
      cout<<endl;
  }


  return 0;
}