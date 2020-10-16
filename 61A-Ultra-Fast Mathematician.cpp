#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a;
    cin>>s>>a;
    int l=s.size();
    for(int i=0;i<l;i++)
    {
        if(s[i]!=a[i])
        {
            cout<<1;
        }
        else cout<<0;
    }
}
