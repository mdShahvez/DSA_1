#include<iostream>
using namespace std;

int FirstOccerence(int size,int arr[],int key,int i)
{
    if(i==size)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return FirstOccerence(size,arr,key,i+1);

}
int lastOccerence(int size,int arr[],int key,int i)
{
    if(i==size)
    {
        return -1;
    }
    int restarr = lastOccerence(size,arr,key,i+1);
    if(restarr!=-1)
    {
       return restarr;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<FirstOccerence(size,arr,key,0)<<endl;
    cout<<lastOccerence(size,arr,key,0);
    return 0;
}