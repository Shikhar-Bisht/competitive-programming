#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i;
    cin>>t;
    while(t--)
    {
        long long int a,b,n,s,m;
        cin>>a>>b>>n>>s;
        long long int max = n*a+b;
        if(max<s)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(s%n==0&&s/n<=a)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                m=s%n;
                if(m<=b)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}
