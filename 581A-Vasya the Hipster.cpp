#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    if(a>b)
    {
        c=a-b;
        c=c/2;
        cout<<b<<" "<<c;
    }
    else
    {
        c=b-a;
        c=c/2;
        cout<<a<<" "<<c;
    }
}
