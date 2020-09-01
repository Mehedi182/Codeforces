#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,s,a,b,c,d,e,f,g;
    cin>>t;
    while(t--)
    {
        cin>>s>>a>>b>>c;
        d=s/c;
        e=d/a;
        f=e*b;
        g=d+f;
     cout<<g<<endl;
    }
}

