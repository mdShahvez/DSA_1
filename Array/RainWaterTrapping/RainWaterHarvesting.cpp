#include<iostream>
using namespace std;


int main()
{

    int n;
    cin>>n;
    int arr[n];
    int ans = 0;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int left[n];
    left[0] = arr[0];
    for(int i=1;i<n;i++)
    {
        left[i] = max(arr[i],left[i-1]);
    }

    int right[n];
    right[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i] = max(arr[i],right[i+1]);
    }


    for(int i=0;i<n;i++)
    {
        cout<<left[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<right[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        ans  = ans + min(left[i],right[i])-arr[i];
    }

    cout<<"total water units that store is "<<ans<<" units"<<endl;
return 0;
}