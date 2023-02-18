#include<stdio.h>
int main()
{
    int i, j, a=1, n, k;
    printf("Enter the range of triangle: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(k=1; k<=(n-i); k++)
            printf(" ");
        for(j=1; j<=a; j++)
        {
            printf("A");
        }
        a+=2;
        printf("\n");
    }
}
