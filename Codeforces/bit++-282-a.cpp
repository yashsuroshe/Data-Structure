#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        if(s=="X++"||s=="++X")
        {
            n++;
        }
        else
        {
            n--;
        }
    }
    cout<<n;
    return 0;
}