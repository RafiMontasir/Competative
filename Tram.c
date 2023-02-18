
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a, *b, n, i, *c, j=1, lar=-1, d;
    scanf("%d", &n);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(n*sizeof(int));
    c=(int*)malloc((n)*sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
    }
    c[0]=b[0];
    for(i=1; i<n-1; i++)
    {
        c[i]=(c[i-1]+b[i])-a[i];
    }
    c[n-2]=a[n-1];

    for(i=0; i<n-1; i++)
    {
        if(lar<c[i])
            lar=c[i];
    }
    printf("%d", lar);
}
