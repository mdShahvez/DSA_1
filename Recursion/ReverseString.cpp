#include<iostream>
using namespace std;
void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string restOfstring = s.substr(1);   //except 1st chat of string whole string will bw in restOfstring.
    reverse(restOfstring);
    cout<<s[0];
}
int main()
{
   string s;
   cin>>s;
   reverse(s);
   return 0;
}