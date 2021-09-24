#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;

    int b;
    cin>>b;

    int num = a^b;
    int count=0;
    while(num>0)
    {
      
      num&=num-1;
      count++;

    }
    cout<<count<<endl;
    
  return 0;
}