#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n],i,sum=0,maxi=0;
        vector<long long> v;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        map<long long,int> m;
        for(i=n-1; i>=0; i--)
        {
            if(m[arr[i]]==0)
            {
                if(arr[i]>maxi)
                {
                    maxi=arr[i];
                }
                m[arr[i]]++;
                sum=sum+arr[i];
            }
            else
            {
                break;
            }
        }
        m.clear();
        //cout<<i<<" "<<maxi<<" "<<sum<<endl;
        long long temp=maxi*(maxi-1);
        temp=temp/2;
        temp=temp+maxi;
        if(temp==sum&&i>-1)
        {
            long long var=i;
            maxi=0;
            sum=0;
            for(i=i; i>=0; i--)
            {
                if(m[arr[i]]==0)
                {
                    m[arr[i]]++;
                    if(arr[i]>maxi)
                    {
                        maxi=arr[i];
                    }
                    sum=sum+arr[i];
                }
                else
                {
                    break;
                }
            }
            //cout<<i<<" "<<sum<<" "<<maxi<<endl;
            if(i==-1)
            {
                temp=maxi*(maxi-1);
                temp=temp/2;
                temp=temp+maxi;
                if(temp==sum)
                {
                    var++;
                    long long vari=n-var;
                    v.push_back(var);
                    v.push_back(vari);
                }
            }
        }
        sum=0;
        maxi=0;
        m.clear();
        for(i=0; i<n; i++)
        {
            if(m[arr[i]]==0)
            {
                if(arr[i]>maxi)
                {
                    maxi=arr[i];
                }
                m[arr[i]]++;
                sum=sum+arr[i];
            }
            else
            {
                break;
            }
        }
        m.clear();
        temp=maxi*(maxi-1);
        temp=temp/2;
        temp=temp+maxi;
        if(temp==sum&&i<n)
        {
            long long var=i;
            maxi=0;
            sum=0;
            for(i=i; i<n; i++)
            {
                if(m[arr[i]]==0)
                {
                    m[arr[i]]++;
                    if(arr[i]>maxi)
                    {
                        maxi=arr[i];
                    }
                    sum=sum+arr[i];
                }
                else
                {
                    break;
                }
            }
            if(i==n)
            {
                temp=maxi*(maxi-1);
                temp=temp/2;
                temp=temp+maxi;
                if(temp==sum)
                {
                    long long vari=n-var;
                    v.push_back(var);
                    v.push_back(vari);
                }
            }
        }
        if(v.size()>2)
        {
            int a=v[0],b=v[1],c=v[2],d=v[3];
            if(a==c)
            {
                cout<<1<<endl;
                cout<<a<<" "<<b<<endl;
            }
            else
            {
                cout<<2<<endl;
                cout<<a<<" "<<b<<endl;
                cout<<c<<" "<<d<<endl;
            }
        }
        else
        {
            cout<<v.size()/2<<endl;
            for(i=0;i<v.size();i=i+2)
            {
                cout<<v[i]<<" "<<v[i+1]<<endl;
            }
        }
    }
}
