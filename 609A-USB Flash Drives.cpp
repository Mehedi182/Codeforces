#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[110],i,c=0,s=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        s+=a[i];
        if(s>=m)
        {
            break;
        }
        else c++;
    }
    cout<<c+1;
}
