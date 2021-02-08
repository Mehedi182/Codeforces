#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,l,c=0,d=0,a,b;
    cin>>n;
    string  s;
    char ch;
   while(n--)
    {
        cin>>s;
        l=s.size();
        sort(s.begin(),s.end());
        for(int j=0;j<l;j++)
        {
              a=s[j];
              b=s[j+1];
              d=b-a;
              if(d==1)
              {
                  c++;
              }

        }
       if(c+1==l)
       {
           cout<<"Yes"<<endl;
           c=0;
       }
       else
       {
           cout<<"No"<<endl;
           c=0;
       }
}

}
