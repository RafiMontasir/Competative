
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin>>a;
       for(int i=4; i<=a-4; i++)
       {
           e=5;
           d=0;
           b=i;
           c=a-b;
           for(int j=2; j<=b/2; ++j) {
                if (b%j==0) {
                  e=1;
                     break;}
           }
                     if(e==1)
                        d++;
             for (int j=2; j<=c/2; ++j) {
               if (c%j==0) {
                  e=2;
                       break;
                      }
             }
                      if(e==2)
                        d++;
                if(d==2)
                {
                     cout<<b<<" "<<c;
                     break;
                }
       }
}
