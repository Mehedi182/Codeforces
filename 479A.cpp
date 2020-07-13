#include<bits/stdc++.h>
using namespace std;
int main( )
{
    int a,b,c,d[6],i;
    cin>>a>>b>>c;
    d[0]=a+(b*c);
    d[1]=a*(b+c);
    d[2]=a*b*c;
    d[3]=(a+b)*c;
    d[5]=a+b+c;
    d[6]=(a*b)+c;
    for(i=0;i<6;i++)
    {
        if(d[0]<d[i])
    d[0]=d[i];
    }
    cout<<d[0]<<endl;

}
