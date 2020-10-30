#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,i;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0'&&s[i+1]=='0' && s[i+2]=='0')
        {
            c++;

        }
        else if(s[0]=='0'&&s[1]=='0')
        {
            c++;
        }
        else if(s[i]=='1'&&s[i+1]=='1')
        {
            c++;
        }

    }
    if (n==1&&s[0]=='0') cout<<"NO"<<endl;
    else if(s[n-1]=='0'&&s[n-2]=='0')cout<<"NO"<<endl;
    else if(c==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
