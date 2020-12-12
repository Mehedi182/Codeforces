#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c,a[60],t[60],s=0,st=0,st1=0,s1=0;
    cin>>n>>c;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<n;i++)
    {
        cin>>t[i];
    }
     for(i=0;i<n;i++)
    {
        st+=t[i];
        s+=max(0,a[i]-c*st);

    }
    for(i=n-1;i>=0;i--)
    {
        st1+=t[i];
        s1+=max(0,a[i]-c*st1);

    }
    if(s>s1) cout<<"Limak";
    else if(s<s1) cout<<"Radewoosh";
    else cout<<"Tie";
}
