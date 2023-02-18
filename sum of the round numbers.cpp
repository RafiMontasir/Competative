#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, r, d, a, j, *b, e=0;
    cin>>n;
    b=(int*)malloc(5*sizeof(int));
    for(int i=0; i<n; i++)
    {
        d=1;
        c=0;
        cin>>a;
        while(a>0)
        {
            r=d*(a%10);
            d=d*10;
            if(r!=0){
            b[c]=r;
            c++;
           }
            a=a/10;
        }
        cout<<c<<endl;
        for(j=c-1; j>=0; j--)
            cout<<b[j]<<" ";
    }
}
