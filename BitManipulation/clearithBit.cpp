#include<iostream>
using namespace std;

int clearBit(int n,int ith)
{
    int mask = ~(1<<ith);
   
    return (mask&n);

}



int main()
{
    int n;
    cin>>n;

    int ith;
    cin>>ith;

    cout<<clearBit(n,ith)<<endl;
    return 0;
}