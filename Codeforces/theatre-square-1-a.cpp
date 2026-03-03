#include<iostream>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m>>a;
    long long ans=((n/a)+(n%a!=0))*(m/a+(m%a!=0));
    cout<<ans;
    return 0;
}