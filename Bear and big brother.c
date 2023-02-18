
#include<stdio.h>
int main()
{
    int a, b, c=0, i;
    scanf("%d%d",&a,&b);
    for(i=0; i<7; i++)
    {
        if(a>b)
        {
            break;
        }
        c++;
        a*=3;
        b*=2;
    }
    printf("%d",c);
}
