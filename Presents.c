
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a, *b, i, p, n;
    scanf("%d", &n);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]!=-1)
        {
            p=a[i];
            b[p-1]=i+1;
        }
    }
    for(i=0; i<n; i++)
        printf("%d ",b[i]);
}
