
#include<stdio.h>
int main()
{
    int a[5][5], c=0, i, j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j]==1)
            {
                if(i>2)
                c=i-2;
                else
                    c=2-i;
                if(j>2)
                    c+=j-2;
                else
                    c+=2-j;
            }
        }
    }
    printf("%d",c);
    return 0;
}
