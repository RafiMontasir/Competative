#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c, d;
    int e=0;
    cin>>a;
    cin>>b;
    cin>>c;
    d=a+b;
    sort(d.begin(),d.end());
    sort(c.begin(),c.end());
    if(d.size()!=c.size())
    {
        cout<<"NO";
        exit (0);
    }
    for(int i=0; i<c.size(); i++)
    {
        if(c[i]==d[i])
            e++;
    }
    if(e==c.size())
        cout<<"YES";
    else
        cout<<"NO";
}
