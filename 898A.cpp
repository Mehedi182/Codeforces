#include<stdio.h>
int main()
{
    int n,a,r,p;
    scanf("%d",&n);
    r=n%10;
    if(r>5)
    {
        p=(n-r)+10;
        printf("%d",p);
    }
    else if (r==0)
    {
        printf("%d",n);
    }
    else
    {
        a=(n/10)*10;
        printf("%d",a);
    }
    return 0;
}
