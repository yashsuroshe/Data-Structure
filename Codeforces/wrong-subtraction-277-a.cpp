#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n;
    int k;
    cin>>n>>k;
    while(k>0)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
        k--;
    }
    cout<<n;
    return 0;
}