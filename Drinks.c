
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, *a, i;
    double e, s=0;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n; i++)
        s+=a[i];
        e=s/n;
    printf("%.11lf",e);
}
