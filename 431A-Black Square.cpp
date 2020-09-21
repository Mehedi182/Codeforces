#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,l,sum,aa=0,bb=0,cc=0,dd=0;
    string s;
    cin>>a>>b>>c>>d;
    cin>>s;
    l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]=='1')
        {
            aa+=a;
        }
        else if(s[i]=='2')
        {
            bb+=b;
        }
        else if(s[i]=='3')
        {
            cc+=c;
        }
        else if(s[i]=='4')
        {
            dd+=d;
        }
    }
    sum=aa+bb+cc+dd;
    cout<<sum;
}
