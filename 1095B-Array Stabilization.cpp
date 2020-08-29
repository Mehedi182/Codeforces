#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100010],i,b,d,e,c;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
        sort(a,a+n);
        d=a[n-2]-a[0];
        e=a[n-1]-a[1];
        c=min(d,e);
    cout<<c;

}
