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
        map<int,int> m;
        for(i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            m[temp]++;
        }
        map<int,int>::iterator it;
        vector<int> v;
        for(it=m.begin();it!=m.end();it++)
        {
            v.push_back(it->second);
        }
        sort(v.begin(),v.end(),greater<int>());
        int l=v.size(),tw1=v[0],tw2=0;
        for(i=1;i<l;i++)
        {
            int temp1=abs(tw1-tw2),temp2=v[i]/2;
            if(temp1<temp2)
            {
                if(v[i]%2==0)
                {
                    tw1=tw1+temp2;
                    tw2=tw2+temp2;
                }
                else
                {
                    if(tw1<=tw2)
                    {
                        tw1=tw1+temp2+1;
                        tw2=tw2+temp2;
                    }
                    else
                    {
                        tw1=tw1+temp2;
                        tw2=tw2+temp2+1;
                    }
                }
            }
            else
            {
                if(tw1<=tw2)
                {
                    tw1=tw1+v[i];
                }
                else
                {
                    tw2=tw2+v[i];
                }
            }
        }
        cout<<abs(tw1-tw2)<<endl;
    }
}
