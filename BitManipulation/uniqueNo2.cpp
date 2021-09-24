#include<iostream>
using namespace std;

int setBit(int n , int pos)
{
    return ((n & (1<<pos))!=0);
}

void uniqueNo2(int arr[],int n)
{

   int xorSum=0;
   for(int i=0;i<n;i++)
   {
       xorSum^=arr[i];
   }
   int temp=xorSum;
   
   int setbit=0;
   int pos=0;
   while(setbit!=1)
   {
      setbit=xorSum&1;
      pos++;
      xorSum=xorSum>>1;
   }

   int FirstNum=0;
   for(int i=0;i<n;i++)
   {
       if(setBit(arr[i],pos-1))
       {
         FirstNum=FirstNum^arr[i];
       }
   }

    int SecondNum=FirstNum^temp;

   cout<<FirstNum<<endl;
   cout<<SecondNum<<endl;



}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    uniqueNo2(arr,n);
    return 0;
}