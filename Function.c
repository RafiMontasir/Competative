
#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int o=0, e=0, a, d, h, i;
    scanf("%lld", &a);
    if(a<=1000000)
    {
        int s=0;
        for(i=1;i<=a;i++)
        {
            if(i%2==0)
                s+=i;
            else
                s-=i;
        }
        printf("%d",s);
        exit(0);
    }
    double f, g;
    h=a%2;
    if(h==0 && h%2==0){
        a=a/2;
        d=a;
        o= (d/2)*(2+(d-1)*2);
        e= (a/2)*(4+(a-1)*2);
        printf("%lld", e-o);
    }
    else{
            if(h==0)
            {
                a=a/2;
                d=a;
                f=a;
                g=d;
                o= (g/2)*(2+(d-1)*2);
                e= (f/2)*(4+(a-1)*2);
                printf("%lld", e-o);
            }
            else{
        a=a/2;
        d=a+1;
        f=a;
        g=d;
        o= (g/2)*(2+(d-1)*2);
        e= (f/2)*(4+(a-1)*2);
        printf("%lld %lld ",o, e);
        printf("%lld", e-o);
            }
    }
}
