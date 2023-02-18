
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, e, o;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        e=0; o=0;
        cin>>n;
        for(int j=0; j<n; j++)
        {
            cin>>a;
            if(j%2==0)
            {
                if(a%2!=0)
                    e++;
            }
            else
            {
                if(a%2==0)
                    o++;
            }
        }
        if(e==o)
            cout<<e<<endl;
        else
            cout<<"-1"<<endl;;
    }
}
