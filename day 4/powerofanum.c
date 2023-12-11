#include<stdio.h>
#include<math.h> 
int main() 
{
    double base = 2.3;
    double exp = 2.1;
    double result;
    
    result = pow(base, exp);

    printf("%lf ^ %lf = %lf\n", base, exp, result);
    
    printf("%.1lf ^ %.1lf = %.2lf", base, exp, result);

    return 0;
}