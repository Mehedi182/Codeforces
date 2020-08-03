#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,str;
    cin>>s>>str;
    reverse(str.begin(),str.end());
    if(str==s) cout<<"YES";
    else cout<<"NO";
}
