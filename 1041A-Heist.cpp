#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[1010],c,b,d;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    b=a[0];
    d=a[n-1];

   c=d-b-n+1;
    cout<<c;

}
