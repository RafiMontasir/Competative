
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a;
    cin>>n;
    cin>>a;
    if(n<26)
    {
        cout<<"NO";
        exit (0);
    }
    else
    {
        int c=0;

        for(int i=0; i<n; i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
                a[i]=a[i]+32;
        }
        for(char i='a'; i<='z'; i++)
        {
            int j=0;
            while(j<n)
            {
                if(i==a[j])
                {
                    c++;
                    break;
                }
                j++;
            }
        }
        if(c==26)
        cout<<"YES";
        else
         cout<<"NO";
    }
}
