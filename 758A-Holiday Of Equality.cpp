#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,a[100],i,s=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        s+=a[n-1]-a[i];
    }
    cout<<s;

}


