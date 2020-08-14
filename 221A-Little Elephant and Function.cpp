#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    if(n==1) cout<<n;
    else{
    cout<<n<<" ";
    for(i=1;i<n-1;i++)
    {
        cout<<i<<" ";
    }
    cout<<n-1;
    }
}

