
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, sum, s;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        sum=0;
        cin>>n;
        if(n%4!=0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int j=2; j<=n; j+=2)
            {
                cout<<j<<" ";
                sum+=j;
            }
            s=0;
            for(int j=1; j<=n/2-1; j++)
            {
                cout<<2*j-1<<" ";
                s+=(2*j-1);
            }
            cout<<sum-s<<endl;
        }
    }
}
