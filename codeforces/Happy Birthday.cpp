#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        vector<pair<int,int>>pv;
        for(i=0;i<10;i++)
        {
            int temp;
            cin>>temp;
            if(i==0)
            {
                pv.push_back(make_pair(temp,10));
            }
            else
            {
                pv.push_back(make_pair(temp,i));
            }
        }
        sort(pv.begin(),pv.end());
        if(pv[0].second==10)
        {
            cout<<1;
            int var=pv[0].first;
            for(i=0;i<=var;i++)
            {
                cout<<0;
            }
        }
        else
        {
            int var=pv[0].second,var1=pv[0].first;
            for(i=0;i<=var1;i++)
            {
                cout<<var;
            }
        }
        cout<<endl;
    }
}
