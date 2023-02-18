#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, *a, s=0, m;
    cin>>n;
    a=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    cin>>a[i];
    sort(a,a+n,greater<int>());
    m=a[0];
    for(int i=1; i<n; i++)
    {
        s+=(m-a[i]);
    }
    cout<<s;
}
