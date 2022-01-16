#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length(),i;
        map<char,int> m;
        vector<pair<int,char>> v;
        for(i=0;i<l;i++)
        {
                m[s[i]]++;
        }
        map<char,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            pair<int,char> p;
            p.first=it->second;
            p.second=it->first;
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        int n=v.size();
        char c=v[n-1].second;
        //cout<<c<<endl;
        if(c=='P')
        {
            c='S';
        }
        else if(c=='S')
        {
            c='R';
        }
        else
        {
            c='P';
        }
        for(i=0;i<l;i++)
        {
            cout<<c;
        }
        cout<<endl;
    }
}
