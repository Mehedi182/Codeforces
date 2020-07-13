#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
   if(n<6)
   {
       printf("1");
   }
   else
    {
        if(n%5!=0)
        {
            printf("%d",(1+n/5));
        }
        else
        {
            printf("%d",n/5);
        }
    }
    return 0;
}
