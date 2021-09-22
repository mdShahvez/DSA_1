#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"enter the size of array : ";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   
   int m;
   cout<<"entre the value u want to access : ";
   cin>>m;
   cout<<arr[m];
   return 0;
}