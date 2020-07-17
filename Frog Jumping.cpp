#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,k,t,c;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>k;
        if(k%2==0)
        {
            k=k/2;
            c=(a*k)-(b*k);
        }
        else if(k%2!=0)
        {
            k=k-1;
            k=k/2;
            c=(a+a*k)-(b*k);
        }
        cout<<c<<endl;
    }

}
