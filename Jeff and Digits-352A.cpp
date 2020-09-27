#include<iostream>
using namespace std;

int main()
{
long int n,a,i,five=0,zero=0;
   cin>>n;
   for(i=1;i<=n;i++)
   {
       cin>>a;
       if(a==5)
           five++;
        else
            zero++;
   }
   if(five==n)
   {
       cout<<-1<<endl;
   }
   else if(five<9)
   {
       cout<<0<<endl;
   }
   else
   {

       for(int j=five;j>0;j--)
       {

           if((j*5)%9==0)
           {
            for(i=1;i<=j;i++)
            {
                cout<<5;
            }
            for(i=1;i<=zero;i++)
            {
                cout<<0;
            }
            cout<<endl;
            return 0;
           }
       }


   }
}
