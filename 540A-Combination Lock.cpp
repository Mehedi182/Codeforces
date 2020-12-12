#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,a,b,c;
    string s,str;
    cin>>n;
    cin>>s>>str;
    for(i=0;i<n;i++)
    {
        a=abs(s[i]-str[i]);
        b=10-a;
        c=min(a,b);
        sum+=c;
    }
    cout<<sum;
}
