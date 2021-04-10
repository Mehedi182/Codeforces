#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,a[210][210],c=0,b,j;
    cin>>n>>m;
    b=2*m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>a[i][j];

        }
    }
      for(i=0;i<n;i++)
    {
        for(j=0;j<b;j+=2)
        {
      if(a[i][j]==1 || a[i][j+1]==1)
            {
                c++;

            }
        }
    }


cout<<c;
}



