#include<iostream>
using namespace std;

int findithBit(int BinaryNo,int ithbit)
{
    int ans =1;
    int mask = 1<<ithbit;
    if((1<<ithbit) & BinaryNo ==0){
        ans = 0;
    }
    return ans; 
}

int main()
{

    int BinaryNo;
    cin>>BinaryNo;

    int ithbit;
    cin>>ithbit;

    cout<<findithBit(BinaryNo,ithbit);

    return 0;
}