#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n]={0};
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr1[i]=x;
    }
    int arr2[n]={0};
    for(int i=0;i<n;i++)
    {
        arr2[arr1[i]-1]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}