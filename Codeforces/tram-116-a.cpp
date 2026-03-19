#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int a=0;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        a=a-x+y;
        if(a>ans) ans=a;
    }
    cout<<ans;
    return 0;
}