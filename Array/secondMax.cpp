#include<iostream>
using namespace std;

int main()
{   
    int max = 0;
    int SecMax = 0;
    int n;
    cout<<endl;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];

    cout<<"Enter elements in an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Entered array is : ";
    for(int i=0;i<n;i++)
      {
       cout<<arr[i]<<" ";
      }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<endl;
    cout<<"Max element in the array is : "<<max<<endl;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>SecMax && arr[i]!=max)
        {
            SecMax = arr[i];
        }
    }
    cout<<"SecMax element in the arr is : "<<SecMax<<endl;
   
     

    int min = arr[0]; 
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout<<"Min element in the arr is : "<<min<<endl;
    cout<<endl;

  return 0;
}