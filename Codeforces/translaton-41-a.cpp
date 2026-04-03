#include<iostream>
using namespace std;
int main()
{
    string s;
    string t;
    cin>>s;
    cin>>t;
    int n1=s.size();
    int n2=t.size();
    if(n1!=n2)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<n1;i++)
    {
        if(s[i]!=t[n1-i-1])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}