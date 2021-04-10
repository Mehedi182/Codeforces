#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,count=0,d=0;;
    string s,a;
    cin>>t;
    while(t--)
    {
    count=0,d=0;
    cin>>n;
    cin>>s;
    int c=n-11,j=0;
    for(i=0;i<n;i++)
    {

        if(s[j]!='8')
        {
            s[i]=0;
           j++;
        }
        else
        {
            count++;
            if(count>11)
            {
                break;
            }

            a+=s[i];
            d++;
        }
    }
    if(a[0]=='8'&& d==11)
    {
          cout<<"YES"<<endl;
    }
else
{
    cout<<"NO"<<endl;
}
}
}
