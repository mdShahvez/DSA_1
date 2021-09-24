#include<iostream>
using namespace std;

bool noOfSetBits(int n)
{   
    int pos=1;
    int count=0;
    while(n>0)
    {
        n=n&n-1;
        pos++;
        count++;
    }
    if(count>1)
    {
        return true;
    }
    cout<<pos<<endl;
 return false;
}
int main()
{

    int n;
    cin>>n;

    if(n==0 || noOfSetBits(n))
    {
       cout<<"-1"<<endl;
    }
    

    return 0;
}