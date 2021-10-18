//
//    |''|
//    |... rute force approach
//    |,,|
//

#include<iostream>
using namespace std;

int countInversion(int arr[],int n)
{
    int inversion = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                inversion++;
            }
        }
    }
    return inversion;
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
    cout<<countInversion(arr,n);

    return 0;
}