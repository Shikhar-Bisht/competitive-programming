#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,rm=1,sz=-1;
    cin>>n;
    n=n*2;
    vector<int> v;
    priority_queue<int,vector<int>,greater<int>> pq;
    while(n--)
    {
        string s;
        cin>>s;
        if(s[0]=='a')
        {
            int it;
            cin>>it;
            v.push_back(it);
        }
        else
        {
            if(v.empty()==true)
            {
                rm++;
            }
            else
            {
                int l=v.size()-1;
                if(v[l]!=rm)
                {
                    v.clear();
                    rm++;
                    ans++;
                }
                else
                {
                    v.pop_back();
                    rm++;
                }
            }
        }
    }
    cout<<ans;
}
