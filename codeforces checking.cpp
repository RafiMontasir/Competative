
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char b;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        if(b=='c'||b=='o'||b=='d'||b=='e'||b=='f'||b=='r'||b=='s')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
