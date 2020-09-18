#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,c,d;
    cin>>n;
    for(i=n+1;i<=10000;i++)
    {

        a=i%10;
        b=(i/10);
        b=b%10;
        c=(i/100);
        c=c%10;
        d=(i/1000);
        d=d%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=b&&c!=d)
        {
            cout<<i;
            break;
        }
    }
}
