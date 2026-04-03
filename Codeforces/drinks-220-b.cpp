#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n;
    double sum=0;
    while(n--)
    {
        int x;
        cin>>x;
        sum+=x;
    }
    double ans=sum/a;
    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}