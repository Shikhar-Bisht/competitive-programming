#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    deque<int> dq;
    map<int,int> m1,m2;
    map<int,int>::iterator it;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            m1[i+1]=1;
        }
        else
        {
            m2[arr[i]]=1;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(m2[i]==0)
        {
            dq.push_back(i);
        }
    }
    for(it=m1.begin();it!=m1.end();it++)
    {
        int var=it->first;
        if(m2[var]==0)
        {
            if(dq.front()==var)
            {
                arr[var-1]=dq.back();
                dq.pop_back();
            }
            else
            {
                arr[var-1]=dq.front();
                dq.pop_front();
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            cout<<dq.front()<<" ";
            dq.pop_front();
        }
        else
        {
            cout<<arr[i]<<" ";
        }
    }
}
