#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c=0;
    cin>>a>>b;
    while(a<b)
    {
        if(b%2==1)
        {
            b=b+1;
            c++;
        }
        b=b/2;
        c++;
    }
    c=c+a-b;
    cout<<c<<endl;
}
