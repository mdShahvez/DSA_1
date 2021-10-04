#include<iostream>
using namespace std;

int sum(int n)       // this fun recieve value 5;
{
   if(n==0)            //base case
   {
       return 0;
   }
   int PreviousSum = sum(n-1);    //recursive call 
   return n+PreviousSum;          //return value to main fun.
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);      //this call sum fun with value n i.e 5;
    return 0;
}