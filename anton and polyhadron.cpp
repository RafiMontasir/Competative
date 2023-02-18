#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0, n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string a;
        cin>>a;
        if(a[0]=='T')
            sum+=4;
        else if(a[0]=='O')
            sum+=8;
        else if(a[0]=='C')
            sum+=6;
        else if(a[0]=='D')
            sum+=12;
        else if(a[0]=='I')
            sum+=20;
    }
    cout<<sum;
}
