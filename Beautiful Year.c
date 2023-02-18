
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, r, c[4], i, g, d;
    scanf("%d",&a);
    while(1)
    {
        d=0;
        a++;
        b=a;
        i=0;
        while(b!=0)
        {
            r=b%10;
            c[i]=r;
            b/=10;
            i++;
        }
        for(i=0; i<4; i++)
        {
            if(c[i]!=-1)
            {
                for(g=i+1; g<4; g++)
                {
                    if(c[i]==c[g])
                        c[g]=-1;
                }
            }
        }
        for(i=0; i<4; i++)
        {
            if(c[i]==(-1))
                d++;
        }
        if(d==0)
            {
            printf("%d",a);
            exit(0);
            }
    }
}
