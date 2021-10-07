#include<iostream>
using namespace std;

int knapsack(int noOfitems,int wt[],int value[],int weightCapacity)
{
    if(noOfitems==0 || weightCapacity==0)
    {
        return 0;
    }
    if(wt[noOfitems-1]>weightCapacity)
    {
        return knapsack(noOfitems-1,wt,value,weightCapacity);
    }
    return max(knapsack(noOfitems-1,wt,value,weightCapacity-wt[noOfitems-1])+value[noOfitems-1],knapsack(noOfitems-1,wt,value,weightCapacity));
}


int main()
{
    int noOfitems;
    cin>>noOfitems;

    int wt[noOfitems];
    for(int i=0;i<noOfitems;i++)
    {
        cin>>wt[i];
    }
    int value[noOfitems];
    for(int i=0;i<noOfitems;i++)
    {
        cin>>value[i];
    }

    int weightCapacity;
    cin>>weightCapacity;

    cout<<knapsack(noOfitems,wt,value,weightCapacity);

    return 0;
}
