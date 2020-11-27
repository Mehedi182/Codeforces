#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,cnt=0,ct=0;
    cin>>n>>m;
    if(m%n!=0) cout<<-1;
    else if(n==m) cout<<0;
    else
    {
        a=(m/n);
        while(a%3==0){
            a=(a/3);
            cnt++;
        }
        while(a%2==0){
            a=(a/2);
            ct++;
        }
        if(a==1){
            cout<<cnt+ct<<endl;
        }
        else cout<<-1;
}
}
