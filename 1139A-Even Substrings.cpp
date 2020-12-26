#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]%2==0)
        {
            c+=i+1;
        }
    }
    cout<<c;
}
