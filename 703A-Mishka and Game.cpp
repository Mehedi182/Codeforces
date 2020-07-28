#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,A=0,B=0;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            A++;
        }
        else if(b>a)
        {
           B++;
        }
       /* else
        {
            A=0;
            B=0;
        }*/

    }
          if(A>B)
        {
            cout<<"Mishka";
        }
        else if(B>A)
        {
            cout<<"Chris";
        }
        else cout<<"Friendship is magic!^^";
}
