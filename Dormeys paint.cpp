#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, **a, i, temp, l, r, maxi=INT_MIN, u, k;
    cin>>t;
    for(i=0; i<t; i++){
       cin>>n;
       vector<int>a;
       for(int j=0; j<n; j++){
    cin>>temp;
    a.push_back(temp);
       }
       sort(a.begin(),a.end());
       for(i=0; i<n; i++)
       {
           u=(a[n]-a[i]-(n-i));
           if(maxi<u)
           {
               maxi=u;
               l=a[i];
               r=a[n];
           }
       }
       cout<<l<<" "<<r<<endl;
    }
    return 0;
}
