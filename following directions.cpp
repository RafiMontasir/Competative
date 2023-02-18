
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, d, b, c, e;
    string a;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        d=0;
        b=0;
        c=0;;
        cin>>n;
        cin>>a;
        for(int j=0; j<n; j++)
        {
            if(a[j]=='U'){
                d++;}
            else if(a[j]=='D'){
                d--;}
            else if(a[j]=='R'){
                b++;}
            else if(a[j]=='L'){
                b--;}

            if(d==1&&b==1)
            {
                cout<<"YES"<<endl;
                c++;
                break;
            }
        }
        if(c!=1)
            cout<<"NO"<<endl;
    }
}
