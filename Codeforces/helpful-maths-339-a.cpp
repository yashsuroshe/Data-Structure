#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int one=0;
    int two=0;
    int three=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1') one++;
        else if(s[i]=='2') two++;
        else if(s[i]=='3') three++;
    }
    string ans="";
    while(one>0)
    {
        ans+='1';
        one--;
        ans+='+';
    }
    while(two>0)
    {
        ans+='2';
        two--;
        ans+='+';
    }
    while(three>0)
    {
        ans+='3';
        three--;
        ans+='+';
    }
    if(!ans.empty())
    {
    ans.pop_back();
    }
    cout<<ans;
    return 0;
}