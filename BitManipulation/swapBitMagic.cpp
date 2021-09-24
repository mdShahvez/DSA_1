#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;

    int b;
    cin>>b;

     a = a^b;

     b = a^b;
     a = a^b;

    cout<<a<<endl;
    cout<<b<<endl;

  return 0;
}