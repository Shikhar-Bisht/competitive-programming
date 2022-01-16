#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        map<int,int> m,fi;
        map<int,int>::iterator it;
        for(i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            m[temp]++;
        }
        for(it=m.begin();it!=m.end();it++)
        {
            fi[it->second]++;
        }
        vector<pair<int,int>> v;
        for(it=fi.begin();it!=fi.end();it++)
        {
            v.push_back(make_pair(it->first,it->second));
        }
        int be=n,ab=0,calc=0,var=v.size()-1,ans;
        for(i=var;i>=0;i--)
        {
            int a,b,var1=0,var2=0;
            a=v[i].first;
            b=v[i].second;
            //cout<<a<<" "<<b<<" ";
            int temp=a*b;
            be=be-temp;
            //cout<<ab<<" "<<be<<" ";
            if(i!=var)
            {
                var1=ab*v[i+1].first;
                var2=ab*a;
            }
            //cout<<var1<<" "<<var2<<" ";
            calc=calc+(var1-var2);
            //cout<<calc<<" ";
            int fina=be+calc;
            //cout<<fina<<endl;
            if(i==var)
            {
                ans=fina;
            }
            ans=min(ans,fina);
            ab=ab+b;
        }
        cout<<ans<<endl;
    }
}
