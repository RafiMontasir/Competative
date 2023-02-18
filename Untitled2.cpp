
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b;
    cin>>a;
     b=a.size() -1;
    if(a[b]=='0'||a[b]=='2'||a[b]=='4'||a[b]=='6'||a[b]=='8')
        cout<<"The number is even";
    else
        cout<<"The number  is odd";
}
