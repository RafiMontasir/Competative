
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *g, a;
    int n, i, cd=0, ca=0, c;
    scanf("%d%c",&n, &a);
    g=(char*)malloc(n*sizeof(char));
    gets(g);
    c=strlen(g);
    for(i=0; i<c; i++)
    {
        if(g[i]=='D')
            cd++;
        else
            ca++;
    }
    if(ca>cd)
        printf("Anton");
    else if(cd>ca)
        printf("Danik");
    else
        printf("Friendship");
}
