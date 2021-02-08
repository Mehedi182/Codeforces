#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[2005],i,c=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<5)
        {
            if(5-a[i]>=k)
                c++;
        }
    }
    cout<<c/3;
}
