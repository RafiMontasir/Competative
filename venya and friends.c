
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, h, *a, r=0, i;
    scanf("%d%d", &n, &h);
    a=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>h)
            r+=2;
        else
            r++;
    }
    printf("%d",r);
}
