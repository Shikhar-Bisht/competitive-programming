#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    cin>>n;
    long long arr[n];
    vector<pair<long long,long long>> v;
    for(i=0;i<n;i++)
    {
        long long temp;
        cin>>temp;
        v.push_back(make_pair(temp,i));
    }
    sort(v.begin(),v.end());
    long long ct=0;
    for(i=0;i<n;i++)
    {
        ct=max(v[i].first,ct);
        arr[v[i].second]=ct;
        ct++;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
