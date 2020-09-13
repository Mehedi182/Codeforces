#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l,i,c=0;
    l=s.size();
    if(s[0]>=65 && s[0]<=90)
    {
        for(i=0;i<l;i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                c++;
            }
        }
        if(c==l)
        {
            for(i=0;i<l;i++)
            {
                s[i]=tolower(s[i]);
            }
            cout<<s;
        }
        else cout<<s;
    }
    else if (s[0]>=97 && s[0]<=122)
    {
        for(i=1;i<l;i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                c++;
            }
        }
        if(c==(l-1))
        {
            s[0]=s[0]-32;
            for(i=1;i<l;i++)
            {
                s[i]=tolower(s[i]);
            }

            cout<<s;
        }
        else
        {


            cout<<s;
        }
    }

}
