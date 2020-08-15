#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1005],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    n=n-1;
    n=(n/2)+1;
    cout<<a[n-1];
}
85
