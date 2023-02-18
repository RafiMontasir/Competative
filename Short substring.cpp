
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        for(int j=0; j<a.size()-2; j+=2)
        cout<<a[j];
            cout<<a[a.size()-2]<<a[a.size()-1];
        cout<<"\n";
    }
}
