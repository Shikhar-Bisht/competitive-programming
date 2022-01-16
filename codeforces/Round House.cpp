#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b;
    cin>>n>>a>>b;
    if(b>0)
    {
        while(b>0)
        {
            a++;
            if(a>n)
                a=1;
            b--;
        }
    }
    else
    {
        while(b<0)
        {
            a--;
            if(a<1)
                a=n;
            b++;
        }
    }
    cout<<a;
    return 0;
}
