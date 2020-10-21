#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        a=180-a;
        a=360%a;
        if(a==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
