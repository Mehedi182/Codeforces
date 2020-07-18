#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,a=0,d=0,n;
    cin>>n;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
        else d++;
    }
    if(a>d) cout<<"Anton";
    else if(a<d) cout<<"Danik";
    else cout<<"Friendship";

}
