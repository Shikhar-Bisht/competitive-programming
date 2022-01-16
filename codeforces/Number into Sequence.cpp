#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i,maxi=0,num=0,var1;
        cin>>n;
        long long temp=sqrt(n);
        vector <long long> v,ans;
        for(i=2; i<=temp; i++)
        {
            int c=0;
            long long var=n;
            while(var%i==0)
            {
                var=var/i;
                c++;
            }
            if(c>maxi)
            {
                maxi=c;
                num=i;
                var1=var;
            }
        }
        if(maxi==0)
        {
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else
        {
            cout<<maxi<<endl;
            for(i=0; i<maxi-1; i++)
            {
                cout<<num<<" ";
            }
            cout<<num*var1<<endl;
        }
    }
}
