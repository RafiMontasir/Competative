
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, d;
    cin>>n;
    for(int i=0; i<n;i++)
    {
        c=0;
        cin>>a>>b;
        if(a%b==0)
            c=0;
        else if(a<=b)
            c=b-a;
        else
        {
            d=a%b;
            c=b-d;
        }
        cout<<c<<endl;
    }
}
