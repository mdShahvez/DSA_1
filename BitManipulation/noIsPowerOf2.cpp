#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        n=n&n-1;
        count++;
    }
    if(count==1)
    {
      cout<<"power of two"<<endl;
    }else{
      cout<<"NO power of two";
    }

  return 0;
}