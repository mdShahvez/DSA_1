#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];
    int mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int difference = 0;
            if(arr[j]>arr[i])
            {
                difference = arr[j]-arr[i];
                mx=max(mx,difference);
            }
        }
    }
    cout<<"max profit is of "<<mx<<endl;
    return 0;
}

                                                //    ^
                                                //    |                    (sell_stock)
                                                //    |                    .
                                                //    |                   . .
                                                //    |                 .    .
                                                //    |        .       .      .
                                                //    |      .   .   .         .
                                                //    |    .       .
                                                //    |  .
                                                //    | (buy_stock)
                                                //  __|_______________________________
                                                //    |                                 