#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,l,i,r,j;
    char s[109];
    char c1,c2;
    cin>>n>>m;
    for(i=0;i<n;i++)
    cin>>s[i];
    for(j=0;j<m;j++)
    {
        cin>>l>>r>>c1>>c2;
    for(i=(l-1);i<r;i++)
    {

        if(s[i]==c1)
        {
            s[i]=c2;
        }
    }
    }
    for(i=0;i<n;i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}
