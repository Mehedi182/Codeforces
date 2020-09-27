#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,s=0,c,d;
    cin>>a>>b;
    d=a-1;
    c=d-b;
    for(i=2;i<=c+1;i++)
    {
        s+=i;
    }
    if(a<=b)
        cout<<d;
    else
    cout<<s+b;

}
