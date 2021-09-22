#include<iostream>
using namespace std;


bool TakingMidAsBarrierWeCanAllocateBooks(int PagesInBooks[],int NoOfStudents,int mid,int SizeOfArr)
{
    int students=1;
    int Sum=0;
    
    for(int i=0;i<SizeOfArr;i++)
    {
       
        if(Sum+PagesInBooks[i]>mid)
        {
             students++;
             Sum=PagesInBooks[i];
        }
        else{
            Sum=Sum+PagesInBooks[i];
        }
    }
    
  return students<=NoOfStudents;
}

int binaryMidAllocation(int SizeOfArr,int PagesInBooks[],int NoOfStudents)
{

    int min=-1;
    for(int i=0;i<SizeOfArr;i++)
    {
        if(PagesInBooks[i]>min)
        {
            min=PagesInBooks[i];
        }
    }
    
    int max=0;
    for(int i=0;i<SizeOfArr;i++)
    {
        max=max+PagesInBooks[i];
    }
    

    int result=0;
    while(min<=max)
    {
        int mid = (min+max)/2;
        if(TakingMidAsBarrierWeCanAllocateBooks(PagesInBooks,NoOfStudents,mid,SizeOfArr))
        {
            result=mid;
            max=mid-1;
        }else{
            min=mid+1;
        }
    }
    return result;
}
int main()
{
    int SizeOfArr;
    cin>>SizeOfArr;

    int PagesInBooks[SizeOfArr];

    for(int i=0;i<SizeOfArr;i++)
    {
        cin>>PagesInBooks[i];
    }

    int NoOfStudents;
    cin>>NoOfStudents;


    cout<<binaryMidAllocation(SizeOfArr,PagesInBooks,NoOfStudents)<<endl;

    
return 0;
}