#include<iostream>
using namespace std;
int GCD(int a,int b)
{
    while(b!=0)
    {
        int rem = a%b;
        a=b;
        b=rem;
    }
   return a;
}
int main()
{
    int num1;
    int num2;
    cin>>num1;
    cin>>num2;
    cout<<GCD(num1,num2);


    return 0;
}