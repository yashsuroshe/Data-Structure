#include<iostream>
using namespace std;
int main()
{
    long long n,x;
    cin>>n>>x;
    long long a;
    if(n%2==0)
    {
        a=n/2;
    }
    else
    {
        a=(n+1)/2;
    }
    if(x<=a)
    {
        cout<<(2*x)-1;
    }
    else
    {
        x=x-a;
        cout<<2*x;
    }
    return 0;
}