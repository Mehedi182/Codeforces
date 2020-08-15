#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[105][105];
    int n,m;
	cin>>n>>m;
	int r=n*m,c=0;
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='B'||a[i][j]=='W'||a[i][j]=='G')
                c++;
		}

}
if(r==c) cout<<"#Black&White";
		else cout<<"#Color";
}
70
