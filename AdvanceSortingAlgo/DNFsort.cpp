#include<iostream>
using namespace std;
void dnf(int arr[],int n,int low,int mid,int high)
{
    for(int i=0;i<n;i++)
    {
       
       if(arr[mid]==1)
       {
           mid++;
       }
       else if(arr[mid]==0)
       {
           swap(arr[low],arr[mid]);
           low++;
           mid++;
       }
       else if(mid==high)
       {
           break;
       }
       else
       {
           swap(arr[mid],arr[high]);
           high--;
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
    dnf(arr,n,0,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}