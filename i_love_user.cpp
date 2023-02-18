
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, *a, mini, maxi, c=0;
    cin>>n;
    a=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
        cin>>a[i];
        mini=a[0];
        maxi=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>maxi){
            c++;
            maxi=a[i];
        }
        if(a[i]<mini)
        {
            c++;
            mini=a[i];
        }
    }
    cout<<c;
}
