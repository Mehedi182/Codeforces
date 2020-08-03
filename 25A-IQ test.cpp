#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a[100],c=0,ct=0,b,d;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            c++;
            b=i+1;
        }
        else
        {
            ct++;
            d=i+1;

        }
    }
    if(c>ct) cout<<d;
    else cout<<b;

}

