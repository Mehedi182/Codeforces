#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4,a[5],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int b=a[3]-a[0];
    int c=a[3]-a[1];
    int d=a[3]-a[2];
    cout<<d<<" "<<c<<" "<<b;

}
