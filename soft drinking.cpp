
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    int a, b, e, f;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    k=k*l;
    c=c*d;
    a=k/(n*nl);
    b=e/n;
    e=p/(n*np);
    f=a<b?(a<e?a:e):(b<e?b:e);
    cout<<f;
}
