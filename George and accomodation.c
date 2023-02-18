
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, *p, *q, i, c=0;
    scanf("%d", &n);
    p=(int*)malloc(n*sizeof(int));
    q=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d",&p[i]);
        scanf("%d",&q[i]);
    }
    for(i=0; i<n; i++)
    {
        if((q[i]-p[i])>=2)
            c++;
    }
    printf("%d",c);
}
