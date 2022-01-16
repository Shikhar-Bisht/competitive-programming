#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*int n;
    cin>>n;
    string s;
    cin>>s;
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        cin>>s1;
        int l=s1.length(),i,c=0;
        map<char,int> m;
        for(i=0;i<l;i++)
        {
            m[s1[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(m[s[i]]>0)
            {
                m[s[i]]--;
                c++;
            }
            if(c==l)
            {
                break;
            }
        }
        cout<<i+1<<endl;
    }*/
    int n,i;
    cin>>n;
    string s;
    cin>>s;
    multimap<char,int> ma;
    for(i=0; i<n; i++)
    {
        ma.insert(pair<char,int>(s[i],i+1));
    }
    typedef std::multimap<char,int>::iterator MMAPiterator;
    /*for(MMAPiterator=ma.begin();MMAPiterator!=ma.end();MMAPiterator++)
    {
        cout<<MMAPiterator->first<<" "<<MMAPiterator->second<<endl;
    }*/
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int l=str.length();
        map<char,int> m;
        for(i=0; i<l; i++)
        {
            m[str[i]]++;
        }
        map<char,int>::iterator it;
        vector<int> v;
        for(it=m.begin(); it!=m.end(); it++)
        {
            char c=it->first;
            int var=it->second;
            pair<MMAPiterator,MMAPiterator> result=ma.equal_range(c);
            MMAPiterator iti;
            for(iti=result.first;iti!=result.second;iti++)
            {
                var--;
                v.push_back(iti->second);
                if(var==0)
                {
                    break;
                }
            }
        }
        int maxi=v[0];
        for(i=0;i<v.size();i++)
        {
            if(v[i]>maxi)
            {
                maxi=v[i];
            }
        }
        cout<<maxi<<endl;
    }
}
