#include<stdio.h>
int main()
{
    int a,b,n,i,count=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if ((a+2<=b))
        {
            count++;
        }

    }
          printf ("%d",count);
    return 0;
}

