#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,c=0;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
           c++;
        }

    }
    if(c>=1)
    {
        cout<<"YES";
    }
    else cout<<"NO";


}
