#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    cin>>a>>b>>c;
    d=a>b?(a<c?a:c):(b<c?b:c);
    e=a>b?(a>c?a:c):(b>c?b:c);
    f=a<b?(a<c?a:c):(b<c?b:c);
    cout<<(e-d)+(d-f);
}
