#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=1,mx=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
        }
        else c=1;
        mx=max(mx,c);
    }
    cout<<mx;

}
