#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str,st;
  int i,l1,l2,c=0;
    cin>>str>>st;
   l1=str.size();
   l2=st.size();
  if(l1!=l2){
  cout<< "No"<<endl;
 }
    else{
   for(i=0;i<l1;i++){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' || str[i]=='o'|| str[i]=='u'){
            if(st[i]=='a'|| st[i]=='e'|| st[i]=='i' || st[i]=='o'|| st[i]=='u'){
          c++;
            }
                else
 {
  c=0;
 }
        }
   else{
    if(st[i]=='a'|| st[i]=='e'|| st[i]=='i' || st[i]=='o'|| st[i]=='u'){
               c=0;
            }
                else{
        c++;
      }
}
    }
        if(c==l1){
    cout<< "Yes"<<endl;
}
else{
  cout<< "No"<<endl;
 }
 }
    return 0;
}
