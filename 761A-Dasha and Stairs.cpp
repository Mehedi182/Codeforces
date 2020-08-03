#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a;
    if (n==0 && a==0)
    {
         cout<<"NO";
return 0;
 }
    else if(n>a)
    {
        b=n-a;
    }

    else
    {
        b=a-n;
    }
    if (b<=1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
