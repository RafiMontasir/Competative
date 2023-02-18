
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y, n, a;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>x>>y>>n;
        a=(n-y)/x;
        cout<<(a*x)+y<<endl;
    }
}
