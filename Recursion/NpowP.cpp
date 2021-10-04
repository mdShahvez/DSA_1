#include<iostream>
using namespace std;

int pow(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    int prePower = pow(n,p-1);
    return n*prePower;
}
int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    cout<<pow(n,p);
    return 0;
}