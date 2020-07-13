#include<stdio.h>
int main()
{
    int n,a,b,position;
    scanf("%d %d %d", &n, &a, &b);
    if(n > (a + b))
    {
       position = b + 1;
       printf("%d\n",position);
    }
    else
    {
        position = n - a;
        printf("%d\n",position);
    }
}
