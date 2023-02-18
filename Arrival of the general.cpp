#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a, n, ch= INT_MAX, bo=INT_MIN, s=0, b, c;
    cin>>n;
    a=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
    {
        if(a[i]<=ch){
            ch=a[i];
            c=i;
        }
        if(a[i]>bo){
            bo=a[i];
            b=i;
        }
    }
    if(b<c)
        s=b+((n-1)-c);
    else
        s=b+(n-2-c);
    cout<<s;
}
