#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, *a, c=0, d=0;
    cin>>n;
    a=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
        cin>>a[i];
        if(a[0]==-1)
            d=1;
   for(int i=0; i<n; i++)
    {
        if(a[i]==-1)
        {
            if(i!=0)
                if(c!=0)
                   c--;
                else
                  d++;
         }
        else if(a[i]>0)
        {
            if(c>0)
                c+=a[i];
            else
                c=a[i];
        }
    }
   cout<<d;
}
