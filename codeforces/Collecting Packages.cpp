#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<pair<int,int>> v;
        int n,i,j;
        cin>>n;
        for(i=0; i<n; i++)
        {
            int temp1,temp2;
            cin>>temp1>>temp2;
            v.push_back(make_pair(temp1,temp2));
        }
        sort(v.begin(),v.end());
        int xmax=0,ymax=0,flag=0;
        string s="";
        for(int i=0; i<n; i++)
        {
            if(v[i].first<xmax||v[i].second<ymax)
            {
                flag=1;
                break;
            }
            else
            {
                for(j=0; j<(v[i].first-xmax); j++)
                    s=s+"R";
                for(j=0; j<(v[i].second-ymax); j++)
                    s=s+"U";
                xmax=v[i].first;
                ymax=v[i].second;
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        /*for(i=0;i<n;i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }*/
    }
    return 0;
}

