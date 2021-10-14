#include<iostream>
using namespace std;
bool isSafe(int** arr[],intt x,int y,int n)
{
      for(int row=0;row<x;row++)
      {                              
          if(arr[row][y]==1)
          {                                 //for column check first column      |
              return false;                 //                                   V
          }
      }  

      int row=x;
      int col=y;
      while(row>=0 && col>=0)
      {
          if(arr[row][col]==1)
          {
              return false;
          }
          row--;
          col++;
      }


       row=x;
       col=y;
      while(row>=0 && col<n)
      {
          if(arr[row][col]==1)
          {
              return false;
          }
          row--;
          col++;
      }
      return true;f

}
bool nQueen()
{

}
int main()
{
    int n;
    cin>>n;

    retrun 0;
}