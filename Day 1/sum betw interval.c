#include <stdio.h>

int main()
{
    int a,b,sum=0,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sum+=i;
    }
    printf("sum of number in interval %d %d is %d",a,b,sum);
}