#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s=0, d=0, i, e=1;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    i=0;
    while(i<n)
    {
        if(a[i]>a[n-1])
        {
            if(e%2==0)
            {
                d+=a[i];
                e++;
                i++;
            }
            else
            {
                s+=a[i];
                e++;
                i++;
            }
        }
        else
        {
            if(e%2==0)
            {
                d+=a[n-1];
                e++;
                n--;
            }
            else
            {
                s+=a[n-1];
                e++;
                n--;
            }
        }
    }
    cout<<s<<" "<<d;
}
