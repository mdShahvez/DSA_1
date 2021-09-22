#include<iostream>
using namespace std;

int main()
{
   int totalCandy;
   string indicator = "true";
   int extraCandies;
   cout<<"enter no of extraCandies : ";
   cin>>extraCandies;
   int n;
   cout<<"size of array : ";
   cin>>n;
   int arr[n];
   cout<<"enter elements of Array : ";

   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }


   for(int index1=0;index1<n;index1++)
   {                                                          //index = 4
        totalCandy = arr[index1]+extraCandies;                 //2+1 = 3
      
        for(int index2=0;index2<n;index2++)                   //start from
        {
           if(index1==index2)
           {
               continue;                                   
               cout<<"continue"<<" ";
           }
           else 
           {
             if(totalCandy>=arr[index2])             //compare total candy with other elements except 
             {
               indicator = "true";
             }

             else
             {
               indicator = "false";
               break;
             }
           }
        }
      cout<<indicator<<" ";
  }
return 0;
}