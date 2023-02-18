
#include<stdio.h>
int main()
{
    int x, sc;
    scanf("%d", &x);
    if(x<=5)
    {
        printf("1");
    }
    else
    {
        if(x%5==0)
        {
            sc=x/5;
            printf("%d",sc);
        }
        else
        {
            sc=x/5;
            printf("%d", sc+1);
        }
    }
}
