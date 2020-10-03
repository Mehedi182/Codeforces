#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a[100005],i,c=1,mx=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
        for(i=0;i<n-1;i++)
{
      if(a[i]<=a[i+1])
        {
            c++;
        }
        else c=1;
        mx=max(mx,c);

}

    cout<<mx;
}
