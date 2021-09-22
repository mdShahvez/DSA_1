#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            profit=profit+(arr[i]-arr[i-1]);
        }
    }
    cout<<profit<<endl;
return 0;  
}


                                                   
                                                //    |                  (Sell_anthr)
                                                //    |                  .
                                                //    |                 . .         .
                                                //    | (sell_stock)   .    .      . .               //calculate total profit i.e  
                                                //    |        .      .       .   .   .              //(sell-buy)+(sell_anthr-buy_anthr)
                                                //    |      .   .   .         . .
                                                //    |    .       ..           (so..on)
                                                //    |  .         (buy_anthr)
                                                //    | (buy_stock)
                                                //  __|________________________________________
                                                //    |                                 