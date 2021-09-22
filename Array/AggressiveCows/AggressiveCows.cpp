#include<iostream>
#include<algorithm>
using namespace std;

bool ByTakeMidAsDistanceWeCanPlace(int TotalStoles,int stoles[],int mid,int cows)
{
    int FirstCowPlacedAt = stoles[0];
    int count=1;

    for(int i=1;i<TotalStoles;i++)
    {
        if(stoles[i]-FirstCowPlacedAt >= mid)
        {
             count++;
             FirstCowPlacedAt=stoles[i];
        }
        if(count==cows)
        {
            return true;
        }
    }
   return  false;
}

int binaryArrangeCows(int TotalStoles,int stoles[],int cows)
{
    int low = 1;
    int high = stoles[TotalStoles-1]-stoles[0];
    int result=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(ByTakeMidAsDistanceWeCanPlace(TotalStoles,stoles,mid,cows))
        {
            result = mid;
            low = mid+1;         //normally we do low=mid-1 but here we have to find largest ans.
        }
        else{
            high=mid-1;
        }
    }
  return result;
}

int main()
{
    int TotalStoles;
    cin>>TotalStoles;

    int stoles[TotalStoles];
    for(int i=0;i<TotalStoles;i++)
    {
        cin>>stoles[i];
    }
    sort(stoles,stoles+TotalStoles);

    int cows;
    cin>>cows;

    cout<<binaryArrangeCows(TotalStoles,stoles,cows)<<endl;

   return 0;
}