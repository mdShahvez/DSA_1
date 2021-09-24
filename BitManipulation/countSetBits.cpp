#include<iostream>
using namespace std;
void setBits(int n)
{
     int c=0;
    while(n>0)
    {
        n=n&n-1;
        c++;
    }
    cout<<c<<endl;
}
int main()
{

    int n;
    cin>>n;
    setBits(n);
    
    return 0;
}