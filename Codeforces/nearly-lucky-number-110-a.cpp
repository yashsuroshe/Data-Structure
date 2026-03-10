#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            count++;
        }
    }
    if(count == 0)
    {
        cout<<"NO";
        return 0;
    }

    while(count>0)
    {
        if(count%10!=4 && count%10!=7)
        {
            cout<<"NO";
            return 0;
        }
        count=count/10;
    }
    cout<<"YES";
    return 0;
}