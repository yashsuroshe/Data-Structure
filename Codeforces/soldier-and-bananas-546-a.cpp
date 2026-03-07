#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int k,w;
    long long n;
    cin>>k>>n>>w;
    long long total=k*(w*(w+1)/2);
    if(total<=n) cout<<0;
    else cout<<total-n;
    return 0;
}