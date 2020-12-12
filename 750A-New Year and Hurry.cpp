#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,a,b,c=0;
    cin>>n>>k;
    k=240-k;
    for(i=1;i<=n;i++)
    {
        a=k-5*i;
        k=k-5*i;
        b=max(0,a);
        if(b>0 || a==0)
        {
            c++;
        }
    }
    cout<<c;
}
