#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long double d,sq,mul,var,z=0;
        cin>>d;
        sq=d*d;
        mul=4*d;
        var=sq-mul;
        if(var<z)
        {
            cout<<"N"<<endl;
        }
        else
        {
            long double diff=sqrt(var);
            long double a=d+diff;
            a=a/2;
            long double b=d-a;
            if(a>=z&&b>=z)
            {
                printf("Y %0.9Lf %0.9Lf",a,b);
                cout<<endl;
            }
            else
            {
                cout<<"N"<<endl;
            }
        }
    }
}
