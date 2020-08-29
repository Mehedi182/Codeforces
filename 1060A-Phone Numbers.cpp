#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,b;
    string s;
    cin>>n;
    cin>>s;
    b=n/11;
    if(n<11) cout<<0;
    else{
    for(i=0;i<n;i++)
    {
        if(s[i]=='8')
           {
               c++;
           }
    }
    if(c>b) cout<<b;
    else cout<<c;
    }


}
10
