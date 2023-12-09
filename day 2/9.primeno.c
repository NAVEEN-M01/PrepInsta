

#include <stdio.h>

int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count > 1)
        printf("the number is not prime");
    else
        printf("the number is prime");
    

    return 0;
}
