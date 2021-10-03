#include<iostream>
using namespace std;

int main()
{
    int num,row,col;
    cin>>num;
    cout<<endl;

    for(int row=1;row<=num;row++)
    {
        for(int col=1;col<=row;col++)
        {
            if(col==1 || col==row || row==1 )
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int col=1;col<=2*num-2*row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
             if(col==1 || col==row || row==1 )
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
           
        }
        cout<<endl;
    }




     for(int row=num;row>=1;row--)
    {
        for(int col=1;col<=row;col++)
        {
            if(col==1 || col==row || row==1 )
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int col=1;col<=2*num-2*row;col++)
        {
            cout<<" ";
        }

        for(int col=1;col<=row;col++)
        {
             if(col==1 || col==row || row==1)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
           
        }
        cout<<endl;
    }


  return 0;
}
