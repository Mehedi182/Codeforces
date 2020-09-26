#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,i,j,c,d;
    cin>>a>>b;
    if(a==b) cout<<a;
    else
    {


     a=b-a;
    c=a/2;
    d=a/3;
    if(c>d||c==d||a==1) cout<<2;

    else cout<<3;
    }

}
