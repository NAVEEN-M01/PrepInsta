

#include <stdio.h>

int main()
{
    int a=0,b=1,nxtnum,n,i;
    scanf("%d",&n);
    printf("%d , %d ,",a,b);
    for(i=2;i<=n;i++)
    {
        int nxtnum;
        nxtnum=a+b;
        a=b;
        b=nxtnum;
        printf("%d ,",nxtnum);
    }

    return 0;
}
