
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    string a;
    getline(cin,a);
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]!='0')
        for(int j=i+1; j<a.size(); j++)
        {
            if(a[i]==a[j])
                a[j]='0';
        }
    }
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            c++;
    }
    cout<<c;
}
