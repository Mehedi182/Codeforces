#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a;
    cin>>n>>m>>a;
    a=((m+a-1)/a)*((n+a-1)/a);
    cout<<a;
}
