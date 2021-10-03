#include<iostream>
using namespace std;

int main()
{
    int a =10;
    int *aptr;
    aptr = &a;
    cout<<"Value of a     :"<<a<<endl;                                  //10
    cout<<"valur of *aptr :"<<*aptr<<endl;                          //10
    cout<<"Address of a stores in aptr in memory : "<<aptr<<endl;   //address in hexadecimal
    cout<<"Address of a in &a :"<<&a<<endl;                         //address in hexadecimal
    *aptr = 20;                                                    //update the value of a without using id directly using pointer 
    cout<<"updated value of *aptr :"<<*aptr<<endl;                //updated value i.e 20


    return 0;
}