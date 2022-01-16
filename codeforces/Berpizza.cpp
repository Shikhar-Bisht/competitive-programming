#include<bits/stdc++.h>
using namespace std;
struct mycomp{
constexpr bool operator()(pair<int,int>const& a,pair<int,int>const& b)const noexcept
{
    if(a.first==b.first)
    {
        return a.second>b.second;
    }
    else
    {
        return a.first<b.first;
    }
}
};
int main()
{
    int n,i,c=1;
    cin>>n;
    priority_queue<pair<int,int>,vector<pair<int,int>>,mycomp> pq;
    stack<int> st;
    queue<int> qu;
    map<int,int> m;
    for(i=0;i<n;i++)
    {
        int ch;
        cin>>ch;
        if(ch==1)
        {
            int we;
            cin>>we;
            pq.push(make_pair(we,c));
            qu.push(c);
            c++;
        }
        else if(ch==2)
        {
            while(true)
            {
                int var=qu.front();
                qu.pop();
                if(m[var]==0)
                {
                    m[var]=1;
                    cout<<var<<" ";
                    break;
                }
            }
        }
        else
        {
            while(true)
            {
                pair<int,int> p=pq.top();
                pq.pop();
                int var=p.second;
                if(m[var]==0)
                {
                    m[var]=1;
                    cout<<var<<" ";
                    break;
                }
            }
        }
    }
}
