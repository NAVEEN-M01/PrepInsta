

#include <stdio.h>

int main()
{
    int n=1235,sum=0;
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    printf("sum of the digits is %d",sum);
    return 0;
}
