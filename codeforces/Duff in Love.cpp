#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long var;
    var=sqrt(n);
    long long i;
    for(i=2;i<=var;i++)
    {
        long long temp=i*i;
        while(n%temp==0)
        {
            n=n/i;
        }
        var=sqrt(n);
    }
    cout<<n;
}
