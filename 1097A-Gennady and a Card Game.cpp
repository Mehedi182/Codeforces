#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a,b,c,d,e;
    int i;
    cin>>s;
    cin>>a>>b>>c>>d>>e;
    for(i=0;i<2;i++)
    {
        if(s[0]==a[0]||s[0]==b[i]||s[i]==c[0]||s[0]==d[0]||s[0]==e[0]||s[1]==a[1]||s[1]==b[1]||s[1]==c[1]||s[1]==d[1]||s[1]==e[1])
        {
            cout<<"YES";
            break;
        }
        else
        {
            cout<<"NO";
            break;
        }
    }
}
