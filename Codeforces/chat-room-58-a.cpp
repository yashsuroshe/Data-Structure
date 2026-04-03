#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
    int j=0;
    string t="hello";
    while(i<5 && j<s.size())
    {
        if(t[i]==s[j])
        {
            i++;
        }
        j++;
    }
    if(i==5) cout<<"YES";
    else cout<<"NO";
    return 0;
}