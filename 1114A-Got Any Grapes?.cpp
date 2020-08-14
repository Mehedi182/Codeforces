#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,y,z;
    long  int a,b,c,d,e,g,f;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    if(x>a)
    {
        cout<<"No";
    }
    else
    {
        d=a-x;
        e=b+d;
        g=e-y;
        f=g+c;
        if(x<=a && e>=y && f>=z)
        {
            cout<<"Yes";
        }
        else cout<<"No";

    }

}
