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
    int n,i;
    string s;
    cin>>n;
    stack<int> ans;
    vector<pair<int,int>> v;
    for(i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(make_pair(a,i+1));
    }
    int j=0;
    sort(v.begin(),v.end());
    cin>>s;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='0')
        {
            cout<<v[j].second<<" ";
            ans.push(v[j].second);
            j++;
        }
        else
        {
            cout<<ans.top()<<" ";
            ans.pop();
        }
    }
    return 0;
}
