#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b)
{
    if(b==0)
        return a;
    return hcf(b,a%b);
}
int lcm(int a,int b)
{
    return (a/hcf(a,b))*b;
}
int main()
{
    int n,i=1;
    cin>>n;
    int m=lcm(1,n-1);
    while(n-i>i)
    {
        //cout<<n-i<<" "<<i<<endl;
        //cout<<lcm(i,n-i)<<endl;
        if(lcm(n-i,i)<m)
        {
            m=lcm(n-i,i);
        }
        i++;
    }
    cout<<m;
}
