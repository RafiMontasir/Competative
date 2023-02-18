
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a, n, i, j, c, c1=0;
    scanf("%d", &n);
    a=(int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++)
    {
        a[i]=(int*)malloc(3*sizeof(int));
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        c=0;
        for(j=0; j<3; j++)
        {
            if(a[i][j]==1)
                c++;
        }
        if(c>=2)
        {
            c1++;
        }
    }
    printf("%d",c1);
}
