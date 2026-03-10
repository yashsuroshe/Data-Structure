#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0;
    int y=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A') x++;
        else y++;
    }
    if(x==y) cout<<"Friendship";
    else if(x>y) cout<<"Anton";
    else if(x<y) cout<<"Danik";
    return 0;
}