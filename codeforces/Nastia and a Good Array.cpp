#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,mini=1,var,i;
        cin>>n;
        for(i=0;i<n;i++)
        {
            long long temp;
            cin>>temp;
            if(i==0)
            {
                var=temp;
            }
            else
            {
                if(temp<var)
                {
                    var=temp;
                    mini=i+1;
                }
            }
        }
        if(mini!=1)
        {
            cout<<n<<endl;
            cout<<1<<" "<<mini<<" "<<var<<" "<<var<<endl;
        }
        else
        {
            cout<<n-1<<endl;
        }
        for(i=2;i<=n;i++)
        {
            if(i%2==0)
            {
                cout<<1<<" "<<i<<" "<<var<<" "<<var+1<<endl;
            }
            else
            {
                cout<<1<<" "<<i<<" "<<var<<" "<<var<<endl;
            }
        }
    }
}
