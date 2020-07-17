#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a[100],i;
   float s=0;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       s=s+a[i];
   }
   s=s/n;
   cout<<s;
}
