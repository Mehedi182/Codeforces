#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,c=0;
    cin>>a;
    for(i=1;i<a;i++)
    {
            if(a%i==0)
            {
                c++;
            }
    }
    cout<<c<<endl;
     return 0;
}




