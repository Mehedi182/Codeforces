#include<bits/stdc++.h>
using namespace std;
int main()
{
             string s;
             int n,i,t=0,c=0,o=0,d=0,I=0;
             cin>>n;
             while(n--)
             {
                          cin>>s;
                          if(s=="Tetrahedron")
                          {
                                       t+=4;
                          }
                          if(s=="Cube")
                          {
                                       c+=6;
                          }
                          if(s=="Octahedron")
                          {
                                       o+=8;
                          }
                          if(s=="Dodecahedron")
                          {
                                       d+=12;
                          }
                          if(s=="Icosahedron")
                          {
                                       I+=20;
                          }


             }
                          cout<<t+c+o+d+I;


}
