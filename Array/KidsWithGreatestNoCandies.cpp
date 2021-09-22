#include<iostream>
using namespace std;

int main()
{
   int ExtraCandies;
   cout<<"Enter No. of ExtraCandies : ";
   cin>>ExtraCandies;
   cout<<"Size of array............ : ";
   int n;
   cin>>n;
   int max = 0;
   int arr[n];
   int newArr[n];
   
   cout<<"Enter elements in array.. : ";

   for(int i=0;i<n;i++){
       cin>>arr[i];           // input in array
   }

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]+ExtraCandies<max){
            cout<<"false"<<" ";
        }
        else{
            cout<<"true"<<" ";
        }
    }
     return 0;
}