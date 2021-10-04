#include<iostream>
using namespace std;

void towerOfHanoi(int n,char src,char Des,char Help)
{
    if(n==0)
    {
        return; //base
    }
    towerOfHanoi(n-1,src,Help,Des);
    cout<<"move from "<<src<<" to "<<Des<<endl;
    towerOfHanoi(n-1,Help,Des,src);
}
int main()
{
    towerOfHanoi(3,'S','D','H');

    return 0;
}