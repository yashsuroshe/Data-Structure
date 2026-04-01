#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
int main()
{
    string x,y;
    cin>>x;
    cin>>y;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]!=y[i])
        {
            cout<<1;
        }
        else
        {
            cout<<0;
        }
    }
    return 0;
}