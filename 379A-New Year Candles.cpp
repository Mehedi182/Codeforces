#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,m,s=0,b,c;
    float a;
    cin>>m>>n;
    b=m/n;
    c=b;
    while(c>=1)
    {
        a=c/n;
        c=c/n;
        s+=a;

    }
    cout<<int(m+b+s);



}
