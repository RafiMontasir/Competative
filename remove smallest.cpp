#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a, n, b;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int c=0;
        cin>>b;
        a=(int*)malloc(b*sizeof(int));
        for(int j=0; j<b; j++)
            cin>>a[j];
        sort(a,a+b);
        if(b==1){
            cout<<"YES"<<endl;}
        else if(b==2)
        {
            if(a[0]==a[1]||a[1]-a[0]==1)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else if(b>2)
        {
            for(int j=0; j<b-1; j++)
            {
                if(a[j]!=a[j+1]&&a[j+1]-a[j]!=1)
                {
                    cout<<"NO"<<endl;
                    break;
                }
                else
                    {
                        c++;
                    }
                              }
            }
           if(c==b-1 && b>2)
            cout<<"YES"<<endl;
        }
    }

