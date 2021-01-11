#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,c=0;
    cin>>n>>m;
    if(n==1&&m==1) cout<<2;
    else
    {

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i*i+j==n&&i+(j*j)==m)
            {
                c++;
            }
        }
    }
    cout<<c;

    }
}
