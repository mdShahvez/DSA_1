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
    int aux[n];
    
    
   aux[n-1] = arr[n-1];
   for(int i=n-2;i>=0;i--)
   {
	   aux[i] = max(aux[i+1],arr[i]);
   }


   int mx = 0;
   for(int i=0;i<n;i++)
   {
       mx = max((aux[i]-arr[i]),mx);
   }
   cout<<mx<<endl;

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