#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, j, i;
    cin>>t;
    vector<int>v;
    for(i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(j=0; j<n; j++)
            cin>>a[j];
        for(j=0; j<n; j++)
        {
            if(j!=0&&j!=n-1)
            {
                if(a[j-1]!=a[j]&&a[j]!=a[j+1])
                {
                    v.push_back(j+1);
                    break;
                }
            }
            else if(j==0)
                {
                    if(a[1]==a[2]&&a[0]!=a[1])
                    {
                          v.push_back(j+1);
                        break;
                    }
                }
            else
            {
                   v.push_back(j+1);
                    break;
            }
        }
    }
    for(i=0; i<t; i++)
    {
        cout<<v[i]<<endl;
    }
}
