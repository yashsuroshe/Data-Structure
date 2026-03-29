#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    int a;
    cin>>a;
    n=n-1;
    while(n--)
    {
        int x;
        cin>>x;
        if(x!=a)
        {
            a=x;
            count++;
        }
    }
    cout<<count;
    return 0;
}