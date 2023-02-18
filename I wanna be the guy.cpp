
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, o, *a, *b, c;
    cin>>n;
    cin>>m;
    a=(int*)malloc(m*sizeof(int));
    for(int i=0; i<m; i++)
        cin>>a[i];
    cin>>o;
    b=(int*)malloc(o*sizeof(int));
    for(int i=0; i<o; i++)
        cin>>b[i];
        if(m==n||o==n)
        {
            cout<<"I become the guy.";
            exit(0);
        }
    for(int i=0; i<m; i++)
    {
            for(int j=0; j<o; j++)
        {
            if(a[i]==b[j])
                b[j]=-1;
        }
    }
    c=m;
    for(int i=0; i<o; i++)
    {
        if(b[i]!=-1)
        {
            c++;
        }
    }
    if(c==n)
        cout<< "I become the guy.";
    else
        cout<<"Oh, my keyboard!";
}

