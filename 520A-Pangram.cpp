#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    string s;
    cin>>n;
    cin>>s;

    int l=s.size();
    if(n<26) cout<<"NO";
    else{
    for(i=0;i<l;i++)
    {
        s[i]=tolower(s[i]);
    }
    sort(s.begin(),s.end());
    for(i=0;i<l;i++)
{



        if(s[i]!=s[i+1])
        {
            c++;
        }
    }
    if(c>=26) cout<<"YES";
    else cout<<"NO";
    }
}


