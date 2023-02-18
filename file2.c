#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *a, *d, *c;
    char b, e[]="D:/Codeforces/file2.c", f[100];
    a= fopen("D:/Codeforces/file2.c", "r+");
    if(a=='\0')
    {
        printf("file is not valid");
        exit(0);
    }
    b=fgetc(a);
    while(b!=EOF)
    {
        b=fgetc(a);
        printf("%c", b);
    }
    fclose(a);

    //printf("Enter the name of the file you want to copy from:");
    //gets(e);
    //e[100]="D:/Codeforces/file2.c";
    c=fopen(e, "r+");
    if(a=='\0')
    {
        printf("could not open file");
        exit(0);
    }
    printf("Enter the name and directory of the file you want to copy into: ");
    gets(f);
    d=fopen(f, "w+");
    if(d=='\0')
    {
        printf("could not create file..");
        exit(0);
    }
    b=fgetc(c);
    while(b!=EOF)
    {
        fputc(b, d);
        b=fgetc(c);
    }
    fclose(c);
    fclose(d);
    return 0;
}
