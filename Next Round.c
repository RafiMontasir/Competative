
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a, n, i, j, c=0;
    scanf("%d%d",&n, &i);
    a=(int*)malloc(n*(sizeof(int)));
    for(j=0; j<n; j++)
    {
        scanf("%d", &a[j]);
    }
    for(j=0; j<n; j++)
    {
        if(n==1 && i==1 && a[j]>0)
        {
            c=1;
        }
        else if(a[j]>=a[i-1]&&a[j]>0)
        {
            c++;
        }
    }
    printf("%d",c);
}
