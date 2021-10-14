#include<bits/stdc++.h>
using namespace std;

 

void permutation(string s,int l,int r)
{
    
    if(l==r)
    {
       cout<<s<<endl;
       return;
    }

    for(int i=l;i<=r;i++)
    {
        if(i!=l && s[i]==s[l])
        {
            continue;
        }
        swap(s[l],s[i]);
        permutation(s,l+1,r);
      
    }
}
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    sort(s.begin(),s.end());
    
    permutation(s,0,n-1);

    return 0;
}