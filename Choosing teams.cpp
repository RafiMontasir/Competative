
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, *y, c=0;
    cin>>n>>k;
    y=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n;i++)
        cin>>y[i];
    sort(y,y+n);
    n=n-n%3;
    for(int i=0; i<n; i+=3)
    {
        if((5-y[i])-k>=0&&(5-y[i+1])-k>=0&&(5-y[i+2])-k>=0)
            c++;
    }
    cout<<c;
}
