
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, m=0, c=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a>b)
            m++;
        else if(b>a)
            c++;
    }
    if(m>c)
        cout<<"Mishka";
    else if(m==c)
        cout<<"Friendship is magic!^^";
    else
        cout<<"Chris";
}
