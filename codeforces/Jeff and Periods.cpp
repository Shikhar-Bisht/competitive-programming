#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    map<int,int> pos,diff,rm;
    map<int,int>::iterator it;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        pos[arr[i]]=-1;
        diff[arr[i]]=0;
    }
    for(i=0;i<n;i++)
    {
        if(rm[arr[i]]==1)
        {
            continue;
        }
        if(pos[arr[i]]==-1)
        {
            pos[arr[i]]=i;
        }
        else if(diff[arr[i]]==0)
        {
            diff[arr[i]]=i-pos[arr[i]];
            pos[arr[i]]=i;
        }
        else
        {
            if(diff[arr[i]]!=i-pos[arr[i]])
            {
                rm[arr[i]]=1;
            }
            pos[arr[i]]=i;
        }
    }
    int temp=0;
    for(it=rm.begin();it!=rm.end();it++)
    {
        if(it->second==1)
        {
            diff[it->first]=-1;
            temp++;
        }
    }
    int var=rm.size();
    cout<<var-temp<<endl;
    for(it=diff.begin();it!=diff.end();it++)
    {
        if(it->second==-1)
        {
            continue;
        }
        cout<<it->first<<" "<<it->second<<endl;
    }
}
