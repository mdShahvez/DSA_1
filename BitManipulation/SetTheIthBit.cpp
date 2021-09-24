#include<iostream>
using namespace std;

int setBit(int n,int ith)
{
   int mask = 1<<ith;
   return (mask|n);
}
int main()
{
    int n;
    cin>>n;
    int ith;
    cin>>ith;
    cout<<setBit(n,ith);

    return 0;
}