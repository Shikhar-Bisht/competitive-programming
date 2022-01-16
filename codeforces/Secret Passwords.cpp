#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> p(26,-1);
    vector<set<char>> ch(26);
    set<char>::iterator it;
    int em=0;
    for(int j=0;j<n;j++)
    {
        string s;
        cin>>s;
        int l=s.length(),pr=-1,i,var;
        for(i=0;i<l;i++)
        {
            var=s[i]-'a';
            if(p[var]!=-1)
            {
                pr=p[var];
                break;
            }
        }
        if(pr==-1)
        {
            //cout<<em<<endl;
            while(ch[em].empty()==false)
            {
                em++;
                em=em%26;

            }
            for(i=0;i<l;i++)
            {
                var=s[i]-'a';
                p[var]=em;
                ch[em].insert(s[i]);
            }
            if(ch[em].size()==26)
            {
                break;
            }
            em++;
        }
        else
        {
            //cout<<pr<<endl;
            for(i=0;i<l;i++)
            {
                var=s[i]-'a';
                if(p[var]==-1)
                {
                    p[var]=pr;
                    ch[pr].insert(s[i]);
                }
                else if(p[var]!=pr)
                {
                    int ct=p[var];
                    for(it=ch[ct].begin();it!=ch[ct].end();it++)
                    {
                        //cout<<*it<<endl;
                        ch[pr].insert(*it);
                        int temp=*it-'a';
                        p[temp]=pr;
                    }
                    ch[ct].clear();
                }
                if(ch[pr].size()==26)
                {
                    break;
                }
            }
        }
    }
    int ans=0;
    for(int i=0;i<26;i++)
    {
        if(ch[i].size()>0)
        {
            //cout<<i<<endl;
            ans++;
        }
    }
    cout<<ans;
}
