#include<bits/stdc++.h>
using namespace std;
int main()
{
    int na,nb,a[100005],b[100005],k,m,i,j,c=0;
    cin>>na>>nb;
    cin>>k>>m;
    for(i=0;i<na;i++)
    {
        cin>>a[i];
    }

     for(j=0;j<nb;j++)
    {
        cin>>b[j];
        if(a[k-1]<b[j])
        {
            c++;
        }
    }


    if(c>=m) cout<<"YES";
    else cout<<"NO";
}
