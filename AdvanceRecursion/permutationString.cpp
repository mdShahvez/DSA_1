#include<bits/stdc++.h>
using namespace std;

void swap(string s, int l ,int i)
{
    char  temp = s[l];
    s[l] = s[i];
    s[i] = temp; 
}  

void permutation(string s,int l,int r)
{
    if(l==r)
    {
        cout<<s<<endl;
    }
    for(int i=l;i<=r;i++)
    {
        swap(s,l,i);
        permutation(s,l+1,r);
        swap(s,l,i); // backtrack bcz again we need original string ABC to do next process.
    }
}
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    
    permutation(s,0,n-1);

    return 0;
}