#include<iostream>
using namespace std;

long long merge(int arr[],int low,int mid,int high)
{
    long long inversion=0;

    int n1 = mid-low+1;
    int n2 = high-mid;

    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++)
    {
        a[i] = arr[low+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }


    //now merge both the arrays into one 
    int i=0;
    int j=0;
    int k=low;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            //a[i]>b[j]
            arr[k] = b[j];
            inversion+=n1-i;
            k++;
            j++;
        }
    }
    return inversion;
}
long long mergeSort(int arr[],int low,int high)
{
    long long inversion = 0;
    if(low<high)
    {
       int mid = (low+high)/2;
       inversion+= mergeSort(arr,low,mid);
       inversion+= mergeSort(arr,mid+1,high);

       inversion+=merge(arr,low,mid,high);
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
    cout<<mergeSort(arr,0,n-1);
    return 0;
}