#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],n,h,i,s=0,c=0,d;
    cin>>n;
    cin>>h;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>h)
        {
            s=s+2;
        }
        else
        {
            c=c+1;
        }
    }
            cout<<s+c;

}
