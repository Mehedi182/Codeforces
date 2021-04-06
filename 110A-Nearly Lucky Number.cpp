#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,l,c=0;
    string s;
    cin>>s;
    l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            c++;
        }
    }
if(c==4||c==7) cout<<"YES";
else cout<<"NO";
}
