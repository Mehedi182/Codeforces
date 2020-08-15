 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n,k, l,c,d,p,nl,np;
     cin>>n>>k>>l>>c>>d>>p>>nl>>np;
     int a,b,e,m;
     a=k*l;
     a=a/nl;
     b=c*d;
     e=p/np;
     m=min(a,min(b,e));
     m=m/n;
     cout<<m;

 }
