#include<iostream>
using namespace std;

int size;
void max(int arr[],int n)
{   
    int max=0;    // remember
    for(int i=0;i<n;i++)
    {
       if(arr[i]>max){
        max = arr[i];
       }
    }
    cout<<"max number in an array is : "<<max<<endl;
    return;
    
}

void min(int arr[],int n)
{   
    int min=arr[0];   // remember
    for(int i=0;i<n;i++)
    {
       if(arr[i]<min){
        min = arr[i];
       }
    }
    cout<<"min number in an array is : "<<min<<endl;
    max(arr,n); // passing of arr and size 
    return;
    
}

void addElements(int n)
{
    int arr[size];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    cout<<"entered array is  : ";
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
       
    }
    cout<<endl;
    min(arr,n);
    return; 
}


int main()
{
   cout<<"enter the size of array : ";
   cin>>size;
   addElements(size);
   return 0;
}