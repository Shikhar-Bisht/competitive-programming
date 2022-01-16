#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,a,b;
    cin>>k>>a>>b;
    long long temp1=a/k,temp2=b/k;
    long long var1=a%k,var2=b%k;
    if((var1!=0&&temp2==0)||(var2!=0&&temp1==0))
    {
        cout<<-1;
    }
    else
    {
        long long var=temp1+temp2;
        cout<<var;
    }
}
