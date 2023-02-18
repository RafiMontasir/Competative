
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    int i, c, d=0, e=0, f=0, g;
    scanf("%s",a);
    scanf("%s",b);
    c=strlen(a);
    for(i=0; i<c; i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        if(b[i]>='a'&&b[i]<='z')
        {
            b[i]=b[i]-32;
        }
        if(a[i]>b[i]){
                g=1;
                break; }
        else if(a[i]<b[i])
        {
            g=2;
            break;
        }
        else
            g=0;
    }
    for(i=0; i<c; i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        e+=a[i];
        if(b[i]>='a'&&b[i]<='z')
        {
            b[i]=b[i]-32;
        }
        f+=b[i];
    }
    if(e>f || g==1 || e==f&&g==1)
        printf("1");
    else if(e<f || g==2 || e==f&&g==2)
        printf("-1");

    else if(e==f&&g==0)
        printf("0");
    return 0;
}
