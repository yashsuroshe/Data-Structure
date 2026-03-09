#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c1=0;
    int c2=0;
    for(char c:s)
    {
        if(c>='a' && c<='z') c1++;
        else c2++;
    }
    if(c2>c1)
    {
        for(char c:s)
        {
            cout<<toupper(c);
        }
    }
    else
    {
        for(char c:s)
        cout<<tolower(c);
    }
    return 0;
}