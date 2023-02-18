
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c=0, d=0;
    cin>>n;
    int a[n][3], b[n];
    for(int i=0; i<n; i++)
        cin>>b[i];
    for(int i=0; i<n; i++)
    {
        if(b[i]!=0){
        if(b[i]==1)
        {
             for(int j=0; j<n; j++)
             {
                 d=c;
                 if(b[j]!=0&&j!=i){
                 if(b[j]==2)
                 {
                    for(int k=0; k<n; k++)
                    {
                        if(k!=i&&k!=j&&b[k]!=0)
                        {
                            if(b[k]==3)
                            {
                                c++;
                                b[i]=0;
                                b[j]=0;
                                b[k]=0;
                                a[d][0]=i+1;
                                a[d][1]=j+1;
                                a[d][2]=k+1;
                                d++;
                                break;
                            }
                        }
                    }
                    if(b[j]==0)
                        break;
                 }
                 }
             }
            }
        }
        }
    cout<<c<<endl;
    if(c>0)
    for(int i=0; i<c; i++)
        cout<<a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<endl;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a=0, b=0, c=0, d;
    vector<int>ax, bx, cx;
    cin>>n;
    int e[n];
    for(int i=0; i<n; i++)
    {
        cin>>e[i];
        if(e[i]==1)
        {
            ax.push_back(i+1);
            a++;
        }
        if(e[i]==2)
        {
            bx.push_back(i+1);
            b++;
        }
        if(e[i]==3)
        {
            cx.push_back(i+1);
            c++;
        }
    }
    d=a<b?(a<c?a:c):(b<c?b:c);
    cout<<d<<endl;
    if(d>0)
        for(int i=0; i<d; i++)
    {
        cout<<ax[i]<<" "<<bx[i]<<" "<<cx[i]<<endl;
    }
}
