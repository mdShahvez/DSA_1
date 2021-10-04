#include<iostream>
using namespace std;
int febonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return febonacci(n-1)+febonacci(n-2);
}
int main()
{
    int nthNum;
    cin>>nthNum;
    cout<<febonacci(nthNum);

    return 0;
}