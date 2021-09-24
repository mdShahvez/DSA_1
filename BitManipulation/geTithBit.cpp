#include<iostream>
using namespace std;

int getBit(int n,int ith)
{
   
   int mask = 1<<ith;
   return ((n&mask)!=0);      //we compare it with zero bcz due to precedence of operator the ans comes out wrong ;
}
int main()
{
    int n;
    cin>>n;

    int ith;
    cin>>ith;
    cout<<getBit(n,ith)<<endl;
    return 0;
}