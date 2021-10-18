#include<iostream>
using namespace std;

void Swap(int arr[],int f,int s)
{
    int temp = arr[f];
    arr[f] = arr[s];
    arr[s] = temp;
}

void wave(int arr[],int n)
{
    for(int i=1;i<n-1;i+=2)
    {
        if(arr[i]>arr[i-1])
        {
            Swap(arr,i,i-1);
        }
        if(arr[i]>arr[i+1])
        {
            Swap(arr,i,i+1);
        }
    }
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
    wave(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}