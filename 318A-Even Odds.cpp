#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int n,k,s,a;
    cin>>n>>k;
    a=(n+1)/2;
    if(a>=k) cout<<(k*2)-1;
    else cout<<(k-a)*2;
}
