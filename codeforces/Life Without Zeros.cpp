#include<bits/stdc++.h>
using namespace std;
long long int remZero(long long int x)
{
    long long int temp=x,var=0;
    while(temp>0)
    {
        if(temp%10==0)
        {
            temp=temp/10;
        }
        else
        {
            var=var*10+temp%10;
            temp=temp/10;
        }
    }
    temp=0;
    while(var>0)
    {
        temp=temp*10+var%10;
        var=var/10;
    }
    return temp;
}
int main()
{
    long long int x,y,z;
    cin>>x>>y;
    z=x+y;
    x=remZero(x);
    y=remZero(y);
    z=remZero(z);
    if(x+y==z)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
