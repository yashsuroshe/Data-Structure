#include<iostream>
#include<set>
using namespace std;
int main()
{
    int y;
    cin>>y;
    while(true)
    {
        y++;
        string s=to_string(y);
        set<char> st(s.begin(),s.end());
        if(s.size()==st.size())
        {
            cout<<y;
            break;
        }
    }
    return 0;
}