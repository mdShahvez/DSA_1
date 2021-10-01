#include<iostream>
using namespace std;
int findNumDevidedByBoth(int n,int n1,int n2)
{
    int NumDevidedByonlyN1 = n/n1;
    int NumDevidedByonlyN2 = n/n2;
    int NumDevidedByBoth = n/(n1*n2);

    return NumDevidedByonlyN1+NumDevidedByonlyN2-NumDevidedByBoth;
}
int main()
{
    int n;
    cin>>n;

    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    cout<<findNumDevidedByBoth(n,n1,n2);
    return 0;
}