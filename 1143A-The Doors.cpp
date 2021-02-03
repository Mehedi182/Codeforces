#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i,c,d;
    cin>>n;
    long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
      for(i=0;i<n;i++)
      {
          if(a[i]==0)
          {
              c=i;
          }
          else d=i;
      }
      if(c<d) cout<<c+1;
      else cout<<d+1;

}
