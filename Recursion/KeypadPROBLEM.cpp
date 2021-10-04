#include<iostream>
using namespace std;
string keypadArr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            //     0  1   2     3     4     5     6     7      8      9

void keypad(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];                     //i.e we take 2 from 23 in ch.

    string letters = keypadArr[ch-'0']; //here we store letters which are present at char ch value i.e 2nd index which are 'abc' 
                                        //and we minus -'0' bcz we need an int value so that we find index so that to covert
                                        // from char to int we do that.
    string restofstring = s.substr(1);  // here we remove 2 and now move to next input digit that is 3 bcz here we take exmple of '23';

    for(int i=0;i<letters.length();i++)
    {
        keypad(restofstring,ans+letters[i]);
    }

}
int main()
{
    string s;
    cin>>s;
    keypad(s,"");
    return 0;
}