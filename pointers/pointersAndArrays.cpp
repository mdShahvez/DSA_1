#include<iostream>
using namespace std;
//------------------------------------------------pointers and Arrays--------------------------------------------------------//
int main()
{
    int arr[]={10,20,30};
    cout<<*arr<<endl;     //here *arr is contant pointer or indexing pointer which points towards index not towards memory loction.
     cout<<endl;          //so *arr gives 0th index value of array.
                          //but we cannot do like cout<<*arr<<endl;
                          //                         arr++;
                          //it gives an error bc we cannot increment constant pointer;
    
// if u want to print array using pointers then -----------------------------------------------------------------------------


 int *ptr = arr;             //we cannot write &arr,bcz the address of array already storing in var arr; otherwise it eill give error
 cout<<*ptr<<endl;          //*ptr gives value at 0th index that is 10
 cout<<endl;                
// now for printing whole array
for(int i=0;i<3;i++)
{
    cout<<*ptr<<endl;
    ptr++;                 //ptr++ because at i=0 *ptr gives 10 and then ptr to move on next memory loaction
}   
                       //which is 4bytes after as int is of 4 bytes so we do ptr++;


// now what if u want to print the array without using *ptr??-----------------------------------------------------------------------

 for(int i=0;i<3;i++)
 {
     cout<<*(arr+i)<<endl;      //so at first when i=0 it will give 10 
                                // the i=1 it give 20 and then i=2 it give 30;
 }                              //here why we do not write (arr+4i) as we do before bcz int is of 4 byte 
    return 0;                   // bacz  *arr+i is a contant and indexing pointer so when we increment i
                                // it will go to next index and not on next memory location.
}