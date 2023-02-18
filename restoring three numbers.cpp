#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[4], e, f, g, h;
   for(int i=0; i<4; i++)
    cin>>a[i];
   sort(a,a+4, greater<int>());
    e=a[0]-a[1];
   f=a[3]-e;
   g=a[2]-e;
   cout<<e<<" "<<f<<" "<<g;
}
