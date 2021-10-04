#include<iostream>
using namespace std;

void substring(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string restStr = s.substr(1);
    substring(restStr,ans);
    substring(restStr,ans+ch);
}
int main()
{
    string s;
    cin>>s;
    substring(s,"");
    return 0;
}