#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,s;
    cin>>str;
    int n;
    cin>>n;
    s+=str;
    reverse(s.begin(),s.end());

    if(str==s) cout<<"YES";
    else cout<<"NO";
}
