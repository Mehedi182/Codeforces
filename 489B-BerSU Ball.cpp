#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[110],b[110],i,j,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(j=0;j<m;j++)
    {
        cin>>b[j];
    }
    sort(a,a+n);
    sort(b,b+m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(abs(a[i]-b[j])<=1&&a[i]!=-1)
            {
                c++;
                b[j]=-9;
                break;
            }
        }
    }
cout<<c;
}
