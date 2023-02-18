
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, d, *c;
    cin>>n;
    c=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a==1||a==2)
            c[i]=0;
        else
        {
            d=(a/2)+1;
           c[i]=a-d;
        }
    }
    for(int i=0; i<n; i++)
        cout<<c[i]<<endl;
}
