#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d,a[109],c=0,ct=0,i;
    cin>>n;
    if(n%2==0)
    {
        d=n/2;
    }
    else
    {
        d=(n/2)+1;
    }

    for(i=0;i<n;i++){
      cin>>a[i];
      if(a[i]>0){
      c++;
     }
    if(a[i]<0){
      ct++;
     }
   }
   if(c>=d){
    cout<<"2"<<endl;
    }
    else if(ct>=d){
    cout<<"-2"<<endl;
    }
    else{
    cout<<"0"<<endl;
    }
   return 0;
}
