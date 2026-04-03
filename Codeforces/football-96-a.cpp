#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=0;
    int y=0;
    for(char c:s)
    {
        if(c=='1')
        {
            y=0;
            x++;
        }
        else
        {
            x=0;
            y++;
        }
        if(x==7 || y==7)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}