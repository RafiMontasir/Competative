#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c=0;
    cin>>n;
    while(n!=0)
    {
        if(n%100==0){
            c++;
            n-=100;
        }
        else if(n%20==0){
            c++;
            n-=20;
        }
        else if(n%10==0){
            c++;
            n-=10;
        }
        else if(n%5==0)
        {
            c++;
            n-=5;
        }
        else
        {
            c++;
            n-=1;
        }
    }
    cout<<c;
}
