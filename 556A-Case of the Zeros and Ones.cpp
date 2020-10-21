#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i,c0=0,c1=0;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            c0++;
        }
        else c1++;
    }
    cout<<abs(c1-c0);

}
