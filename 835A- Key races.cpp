#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,v1,v2,t1,t2,a,b;
    cin>>s>>v1>>v2>>t1>>t2;
    a=(s*v1)+(2*t1);
    b=(s*v2)+(2*t2);
    if(a<b)
    {
        cout<<"First";
    }
    else if (a>b)
    {
        cout<<"Second";
    }
    else if(a==b) cout<<"Friendship";
}
