#include<iostream>
using namespace std;

void uniqueNo1(int arr[],int n)
{ 
    int xorsum=0;

    for(int i=0;i<n;i++)
    {
         xorsum^=arr[i];
    }
   cout<<xorsum<<endl;
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
    uniqueNo1(arr,n);
    return 0;
}