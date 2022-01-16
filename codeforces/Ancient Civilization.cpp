#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,t1,i;
        cin>>n>>l;
        t1=n;
        vector<int> v(l);
        while(t1--)
        {
            int temp,i;
            cin>>temp;
            for(i=0;i<l;i++)
            {
                if((temp>>i)&1==1)
                {
                    v[i]++;
                }
            }
        }
        int var=n/2,ans=0;
        //cout<<var<<endl;
        for(i=0;i<l;i++)
        {
            //cout<<v[i]<<endl;
            if(v[i]>var)
            {
                ans=ans+pow(2,i);
            }
        }
        cout<<ans<<endl;
    }
}
