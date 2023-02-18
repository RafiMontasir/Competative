
#include<stdio.h>
int main()
{
    int k, n, w, i, s=0, c, nk;
    scanf("%d%d%d", &k, &n, &w);
    for(i=1; i<=w; i++)
    {
        nk=k*i;
        s+=nk;
    }
    c=s-n;
    if(c<0)
    printf("0");
    else
        printf("%d",c);
}
