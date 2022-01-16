#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int i;
        long long ans;
        vector<long long> v(3);
        for(i=0;i<3;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ans=v[1];
        long long temp=v[2]-(v[1]-v[0]);
        temp=temp/2;
        ans=ans+temp;
        cout<<ans<<endl;
    }
}
