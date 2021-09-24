#include<iostream>
using namespace std;


int setBits(int num)
{
    int c=0;
    while(num>0)
    {
        num=num&num-1;
        c++;
    }
  return c; 
}
void countSetBits(int n)
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans=ans+setBits(i);
    }
    cout<<ans<<endl;
}
int main()
{
    int n;
    cin>>n;
    countSetBits(n);
    return 0;

}