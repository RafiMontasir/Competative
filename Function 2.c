#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   long long int n;
    double a;
    scanf("%lld",&n);
    a=pow(-1,n)*((n+1)/2);
    n=a;
    printf("%lld",n);
    return 0;
}
