#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,*a, sum=0;
    cin>>n;
    a=(float*)malloc(n*sizeof(float));
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<fixed<<setprecision(12)<<sum/n;
}
