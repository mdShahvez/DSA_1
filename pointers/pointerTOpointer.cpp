#include<iostream>
using namespace std;

int main()
{
   int a=10;
   int *p;                //create a *p ptr
   p = &a;               //inside p we store address of a;

   cout<<a<<endl; 
   cout<<*p<<endl;          
   cout<<p<<endl;
   cout<<&a<<endl;

   cout<<endl;

   int **q;                //here we make a ptr **q;
   q=&p;                  //here we stored address of p in ptr q   
   cout<<q<<endl;
   cout<<&p<<endl;

   cout<<endl;


   cout<<*q<<endl;        //here we make d-refrence once so it will returnvalue  of p which is address of a 
   cout<<**q<<endl;       //but here we make double D-reference twice so it will return the value  of a;

    return 0;
}