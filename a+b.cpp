#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, *b;
    string c;
    cin>>a;
    b=(int*)malloc(a*sizeof(int));
    for(int i=0; i<a; i++)
    {
        cin>>c;
        b[i]=c[0]+c[2]-96;
    }
    for(int i=0; i<a; i++)
        cout<<b[i]<<endl;
}
