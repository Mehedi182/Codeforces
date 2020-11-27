#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a;
    int l,c=0,k,i;
    getline(cin,s);
    l=s.size();
    for(i=0;i<l;i++)
    {
    if(s[i]>=97 && s[i]<=122)
        {
        a+=s[i];
        }
    }
    k=a.size();
    sort(a.begin(),a.end());
    for(i=0;i<k;i++)
    {
        if(a[i]!=a[i+1])
        {
            c++;
        }
    }
    cout<<c;
}
