
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, c=0, i=1;
    cin>>n>>k;
    k=240-k;
    do
    {
        k=k-5*i;
        c++;
        i++;
    }
    while(k>=0);
    if(c>n)
    cout<<n;
    else
        cout<<c-1;
}
