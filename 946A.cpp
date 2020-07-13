#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[100],sp=0,sn=0,sub;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]>0)
        {
            sp=sp+a[i];
        }
        else
        {
            sn=sn+a[i];
        }

    }
     sub=sp-sn;
    cout<<sub<<endl;
}
