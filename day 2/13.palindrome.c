

#include <stdio.h>

int main()
{
    int n,n1,rev=0;
    scanf("%d",&n);
    n1=n;
    while(n1>0)
    {
        rev=rev*10;
        rev=rev+(n1%10);
        n1=n1/10;
    }
    if(rev==n)
        printf("the number is palindrome");
    else
        printf("the number is not palindrome");
    return 0;
}
