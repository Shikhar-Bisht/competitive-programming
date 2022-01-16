#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,k,i,e=0,o=0;
        cin>>l>>k;
        map<char,int> m;
        map<char,int>::iterator it;
        for(i=0; i<l; i++)
        {
            char temp;
            cin>>temp;
            m[temp]++;
        }
        for(it=m.begin(); it!=m.end(); it++)
        {
            int var=it->second;
            if(var%2==1)
            {
                o++;
            }
            int temp=var/2;
            e=e+temp;
        }
        //cout<<e<<" "<<k<<endl;
        int ans=e/k;
        int c=e%k;
        c=c*2;
        o=o+c;
        ans=ans*2;
        //cout<<ans<<" "<<o<<endl;
        if(o>=k)
        {
            ans++;
        }
        cout<<ans<<endl;
    }
}
