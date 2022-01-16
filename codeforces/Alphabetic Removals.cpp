#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,var,i;
    cin>>n>>k;
    string s;
    cin>>s;
    char temp;
    map <char,int> m;
    for(i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    /*for(auto &v:m)
    {
            cout<<v.first<<v.second;
    }*/
    for(auto &v:m)
    {
        if(k>=v.second)
        {
            k=k-v.second;
            s.erase(remove(s.begin(),s.end(),v.first),s.end());
        }
        else
        {
            var=k;
            temp=v.first;
            break;
        }
    }
    //cout<<var<<" "<<temp<<endl;
    for(i=0;i<s.length();i++)
    {
        if(var>0&&s[i]==temp)
        {
            var--;
        }
        else
        {
            cout<<s[i];
        }
    }
}
