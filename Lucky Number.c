
#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int n, i, r, c=0, c4=0;
    scanf("%lld", &n);
    for(i=0; n!=0; i++)
    {
        r=n%10;
        c++;
        if(r==4||r==7)
            c4++;
        n/=10;
    }
    printf("%d %d", c, c4);
    if(c4==4||c4==7)
        printf("YES");
    else
        printf("NO");
}
