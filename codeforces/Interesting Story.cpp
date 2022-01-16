#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        vector<int> ans(5),rem(5);
        vector<vector<int>> ma(5);
        for(i=1;i<=n;i++)
        {
            string s;
            cin>>s;
            int l=s.length();
            vector<int> v(5);
            for(j=0;j<l;j++)
            {
                int var=s[j]-'a';
                v[var]++;
            }
            for(j=0;j<5;j++)
            {
                int var;
                if(v[j]>(l-v[j]))
                {
                    ans[j]++;
                    var=v[j]-(l-v[j]);
                    rem[j]=rem[j]+var;
                }
                else
                {
                    var=(l-v[j])-v[j];
                    ma[j].push_back(var);
                }
            }
        }
        for(i=0;i<5;i++)
        {
            rem[i]=rem[i]-1;
            sort(ma[i].begin(),ma[i].end());
        }
        for(i=0;i<5;i++)
        {
            for(j=0;j<ma[i].size();j++)
            {
                rem[i]=rem[i]-ma[i][j];
                if(rem[i]>=0)
                {
                    ans[i]++;
                }
            }
        }
        sort(ans.begin(),ans.end());
        cout<<ans[4]<<endl;
    }
}
