#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c=0;
    char arr[510][510];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(arr[i][j]=='X' && arr[i-1][j-1]=='X' && arr[i-1][j+1]=='X' && arr[i+1][j-1]=='X' && arr[i+1][j+1]=='X')
           {
               c++;
           }
        }
    }
    cout<<c<<endl;
    return 0;
}
