#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int b,k,i,s=0;
    cin>>b>>k;
    int a[100010];
    for(i=0;i<k;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<k-1;i++)
     {
         s+=a[i]*b;
     }
    s+=a[k-1];
    if(s%2==0) cout<<"even";
    else cout<<"odd";
}
