
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    vector<int> e;
    for(int i=1; i<=1700; i++)
        if(i%3!=0 && i%10!=3)
        e.push_back(i);
    for(int i=0; i<t; i++)
    {
        cin>>n;
        cout<<e[n-1]<<endl;
    }
}
