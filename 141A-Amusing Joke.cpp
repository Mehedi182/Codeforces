#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,r;
    cin>>a>>b>>c;
    r=a+b;
    sort(r.begin(),r.end());
    sort(c.begin(),c.end());
    if(r==c) cout<<"YES";
            else cout<<"NO";
}
