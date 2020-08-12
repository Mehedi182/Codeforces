#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int q,n,a,i,b,c,d;
    cin>>q;
    while(q--)
    {
        cin>>n>>a>>b;
        if(n==1)
            cout<<a<<endl;
        else if (n%2==0)
        {
            i=n/2;
            c=i*b;
            d=n*a;
            if(c>d) cout<<d<<endl;
            else cout<<c<<endl;

        }
        else
            {
                i=n/2;
                c=n*a;
                d=i*b+a;
               if(c>d) cout<<d<<endl;
            else cout<<c<<endl;
            }
    }


}
