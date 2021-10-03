#include<iostream>
using namespace std;

int main()
{
  int row,col,num;
  cin>>num;                                                          
  for(int row=1;row<=num;row++)                                     
  {                                                                 
      for(int col=1;col<=num-row+1;col++)
        {
              cout<<"* ";
        } 
      for(int col=1;col<=2*row-2;col++)   
       {
           cout<<"| ";
       }

       for(int col=1;col<=num-row+1;col++) 
       {
           cout<<"* ";
       }
       cout<<endl;
  }  
                     

  for(int row=1;row<=num;row++)                                     
  {                                                                 
      for(int col=1;col<=row;col++)
        {
              cout<<"* ";
        } 
      for(int col=1;col<=2*num-2*row;col++)   
       {
           cout<<"| ";
       }

       for(int col=1;col<=row;col++) 
       {
           cout<<"* ";
       }
       cout<<endl;
  }                                                                
return 0;
}
