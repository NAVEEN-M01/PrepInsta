
#include <stdio.h>

int main()
{
    int n,n1,rem,sum;
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(n1==sum)
        printf("%d is armstrong number",n1);
    else
        printf("%d is not armstrong number",n1);
    return 0;
}
