#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],i,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            c++;
        }
    }
    if(c==n)
    {
        cout<<"EASY";
    }
    else cout<<"HARD";
}
