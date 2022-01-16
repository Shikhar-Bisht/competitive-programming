#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,flag=0;
    cin>>n>>k;
    vector <long long> v;
    v.reserve(1000);
    if(k==n)
    {
        v.push_back(k);
    }
    while(k>=n)
    {
        if(k==n)
        {
            v.push_back(k);
            flag=1;
            break;
        }
        v.push_back(k);
        if(k%2==0)
        {
            k=k/2;
        }
        else if(k%10==1)
        {
            k=k/10;
        }
        else
        {
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<v.size()<<endl;
        for(long long i=v.size()-1; i>=0; i--)
            cout<<v[i]<<" ";
    }
    return 0;
}
