#include<bits/stdc++.h>
using namespace std;
int main()
{
   int **a, n, i, j, c=0;
    cin>>n;
    a=(int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++)
        a[i]=(int*)malloc(2*sizeof(int));
    for(i=0; i<n; i++)
       {
           cin>>a[i][1];
           cin>>a[i][2];
       }
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
    {
        if(j!=i)
        {
            if(a[i][1]==a[j][2])
                c++;
        }
    }
    cout<<c;
}

