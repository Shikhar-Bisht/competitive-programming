#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,flag=0;
    vector<int> v1,v2;
    v1.reserve(1000);
    v2.reserve(1000);
    map<int,int> m;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    for(auto &var:m)
    {
        if(m[var.first]>2)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(auto &var:m)
        {
            if(m[var.first]==1)
            {
                v1.push_back(var.first);
            }
            else
            {
                v1.push_back(var.first);
                v2.push_back(var.first);
            }
        }
        cout<<v1.size()<<endl;
        for(i=0; i<v1.size(); i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        cout<<v2.size()<<endl;
        for(i=v2.size()-1; i>=0; i--)
        {
            cout<<v2[i]<<" ";
        }
    }
    return 0;
}
