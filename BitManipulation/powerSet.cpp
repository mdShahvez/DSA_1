#include<iostream>
using namespace std;

void subset(int arr[],int n)
{

    for(int num=0;num<=(1<<n)-1;num++)
    {
        for(int index=0;index<=n-1;index++)
        {
            if(num & (1<<index))
            {
                cout<<arr[index]<<" ";
            }
             
        }
       cout<<endl;
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
    subset(arr,n);
  return 0;
}