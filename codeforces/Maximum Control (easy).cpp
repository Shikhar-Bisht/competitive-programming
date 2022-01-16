#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n-1;i++)
    {
        int a;
        cin>>a;
        m[a]++;
        cin>>a;
        m[a]++;
    }
    for(auto& var:m)
    {
        if(var.second==1)
        {
            ans++;
        }
    }
    cout<<ans;
}
