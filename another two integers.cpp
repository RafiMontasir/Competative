
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a, b, c;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        c=0;
        if(a>b)
        {
            a=a-b;
            c=a/10;
            a=a%10;
            c=c+a/9;
            a=a%9;
            c=c+a/8;
            a=a%8;
            c=c+a/7;
            a=a%7;
            c=c+a/6;
            a=a%6;
            c=c+a/5;
            a=a%5;
            c=c+a/4;
            a=a%4;
            c=c+a/3;
            a=a%3;
            c=c+a/2;
            a=a%2;
            c=c+a;
        }
        else if(a<b)
        {
            a=b-a;
            c=a/10;
            a=a%10;
            c=c+a/9;
            a=a%9;
            c=c+a/8;
            a=a%8;
            c=c+a/7;
            a=a%7;
            c=c+a/6;
            a=a%6;
            c=c+a/5;
            a=a%5;
            c=c+a/4;
            a=a%4;
            c=c+a/3;
            a=a%3;
            c=c+a/2;
            a=a%2;
            c=c+a;
        }
        cout<<c<<endl;
    }
}
