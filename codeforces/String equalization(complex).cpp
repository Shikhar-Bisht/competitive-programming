#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> change;
    string s1,s2;
    cin>>s1>>s2;
    int l=s1.length();
    for(int i=0; i<l; i++)
    {
        if(s1[i]!=s2[i])
        {
            int flag=0;
            for(auto &ele : change)
            {
                if(ele.first==s1[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                change[s1[i]]=0;
            }
        }
    }
    /*for(auto &ele : change)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }*/
    int var=0;
    for(int i=0; i<l; i++)
    {
        int flag = 0;
        for(auto &ele : change)
        {
            if(ele.first==s2[i])
            {
                if(s2[i]==s1[i])
                {
                    ele.second=ele.second+2;
                    flag=1;
                }
                else
                {
                    ele.second++;
                    flag=1;
                }
            }
        }
        if(flag==0)
        {
            if(s1[i]!=s2[i])
            {
                var++;
            }
        }
    }
    /*for(auto &ele : change)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }*/
    int flag=0;
    for(auto &ele : change)
    {
        if(ele.second==0)
        {
            flag=2;
            break;
        }
        if(ele.second>1)
        {
            flag=1;
        }
    }
    if(flag==2)
    {
        cout<<"NO";
    }
    else if(flag==0)
    {
        if(s1==s2)
        {
            cout<<"YES";
        }
        else if(var>0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}
