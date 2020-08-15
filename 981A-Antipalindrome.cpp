#include <iostream>
using namespace std;

int main(){
    string  s;
    int c=0,l,i;
    cin>>s;
    l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]!=s[l-1-i])
        {
            c=1;
            break;
        }
        else if(s[0]==s[i])
        {
            c++;
        }
    }
        if (l==1) cout<<0;

   else if(c==1)
    {
        cout<<l;
    }
    else if(c==l) cout<<0;
    else cout<<l-1;
}
