#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n,k,i,ans;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(i<k)
        {
            v.push_back(temp);
            if(i==k-1)
            {
                sort(v.begin(),v.end(),greater<int>());
            }
        }
        else
        {
            int var;
            var=v[k-1];
            if(temp>var)
            {
                v.pop_back();
                var=temp;
                v.push_back(var);
                sort(v.begin(),v.end(),greater<int>());
            }
        }
    }
    ans=v[k-1];
    cout<<ans;
    return 0;
}
