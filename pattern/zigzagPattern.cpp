#include<iostream>
using namespace std;



int main()
{
  

  int num,row,col;
  cin>>num;
  for(int row=1;row<=3;row++)
  {
      for(int col=1;col<=num;col++)
      {
          if((row + col)%4==0 || row==2 && col%4==0)
          {
              cout<<"* ";
          }
          else
          {
              cout<<"  ";
          }
      }
      cout<<endl;
  }
return 0 ;
}
