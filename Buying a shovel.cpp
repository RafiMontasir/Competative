#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, r, i=1, b;
    cin>>k>>r;
    b=k;
    while(1)
    {
        if((k-r)%10==0||k%10==0){
            break;
        }
        else
        {
            i++;
            k+=b;
        }
    }
    cout<<i;
}
