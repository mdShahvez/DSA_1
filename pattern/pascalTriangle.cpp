#include<iostream>
using namespace std;


int fact(int n)
{

    int fact=1;
    for(int i=1;i<=n;i++)
    {
      fact=fact*i; 
    }
    return fact;
}

int main()
{
    int n;
    cout<<"enter n no of lines : ";
    cin>>n;

   



    for(int i=0;i<=n;i++)
    {
         for(int j=0;j<n-i;j++)
         { 
             cout<<"-";
         }
        for(int j=0;j<=i;j++)
        {

            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
         cout<<endl;
    }
   return 0;
}