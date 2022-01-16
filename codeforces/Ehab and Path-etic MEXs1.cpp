#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    cout<<n<<endl;
    vector<vector<int>> t;
    vector<pair<int,int>> nd;
    for(i=0;i<n-1;i++)
    {
        cout<<i<<endl;
        int a,b;
        cin>>a>>b;
        cout<<a<<" "<<b<<endl;
        t[a].push_back(b);
        t[b].push_back(a);
        pair<int,int> p;
        p.first=a;
        p.second=b;
        nd.push_back(p);
        cout<<i<<endl;
    }
    int s=0,en=n-2;
    for(i=0;i<nd.size();i++)
    {
        int a=nd[i].first,b=nd[i].second;
        cout<<a<<" "<<b<<" ";
        if(t[a].size()==1||t[b].size()==1)
        {
            cout<<s<<endl;
            s++;
        }
        else
        {
            cout<<en<<endl;
            en--;
        }
    }
}
