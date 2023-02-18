#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, x, y, c, d;
    cin>>a>>b;
    x=a>b?a:b;
    y=a<b?a:b;
    if(y==0)
        c=0;
    else
        c=y;
    x=x-y;
    if(x==0||x==1)
        d=0;
    else
        d=x/2;
    cout<<c<<" "<<d;
}
