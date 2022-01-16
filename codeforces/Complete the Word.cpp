#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long l=s.length(),i,flag=0;
    map<char,long long> m;
    map<char,long long>::iterator it;
    char var='A';
    //cout<<l<<endl;
    /*for(i=0; i<26; i++)
    {
        m[var]=0;
        var++;
    }
    for(i=0; i<l; i++)
    {
        if(s[i]=='?')
        {
            c++;
            if(c==26)
            {
                flag=1;
                break;
            }
            continue;
        }
        if(m[s[i]]==0)
        {
            m[s[i]]++;
            c++;
            if(c==26)
            {
                flag=1;
                break;
            }
        }
        else
        {
            if(s[0]=='T')
            {
                cout<<c<<endl;
            }
            c=0;
            //cout<<"here"<<endl;
            m.clear();
            m[s[i]]++;
            c++;
        }
    }*/
    for(i=0;i<=l-26;i++)
    {
        m.clear();
        int c=0;
        int j;
        for(j=i;j<i+26;j++)
        {
            if(s[j]=='?')
            {
                c++;
                continue;
            }
            else
            {
                m[s[j]]++;
                if(m[s[j]]>1)
                {
                    break;
                }
                c++;
            }
        }
        /*if(i==49)
        {
        cout<<c<<endl;
        }*/
        if(c==26)
        {
            flag=1;
            break;
        }
    }
    //cout<<i<<endl;
    //cout<<c<<endl;
    /*for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }*/
    //cout<<c<<endl;
    if(flag==1)
    {
        long long temp=i;
        m.clear();
        var='A';
        for(i=0; i<26; i++)
        {
            m[var]=0;
            var++;
        }
        for(i=temp; i<=temp+26; i++)
        {
            if(s[i]=='?')
            {
                continue;
            }
            m[s[i]]++;
        }
        vector<char> v;
        for(it=m.begin(); it!=m.end(); it++)
        {
                if(it->second==0)
                {
                    //cout<<it->first;
                    v.push_back(it->first);
                }
        }
        //cout<<endl;
        long long j=0;
        long long vari=temp+26;
        int stop=v.size();
        for(i=temp;i<vari;i++)
        {
            if(s[i]=='?')
            {
                s[i]=v[j];
                j++;
                if(j==stop)
                {
                    break;
                }
            }
        }
        for(i=0;i<l;i++)
        {
            if(s[i]=='?')
            {
                cout<<'A';
            }
            else
            {
                cout<<s[i];
            }
        }
    }
    else
    {
        cout<<-1;
    }
}
