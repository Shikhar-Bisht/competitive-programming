#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxs=0,stm=0,sum=0;
    vector<pair<int,pair<int,int>>> v;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum>maxs)
        {
            v.push_back(make_pair(sum,make_pair(stm,i)));
        }
        if(sum<0)
        {
            sum=0;
            stm=i+1;
        }
    }
    maxs=0;
    stm=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i].first>maxs)
        {
            stm=i;
            maxs=v[i].first;
        }
    }
    int st=v[stm].second.first,en=v[stm].second.second;
    //cout<<st<<" "<<en<<endl;
    for(i=st;i<=en;i++)
    {
        cout<<arr[i]<<" ";
    }
}
