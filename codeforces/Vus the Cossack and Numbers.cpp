#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    long long sum=0;
    cin>>n;
    vector<double> v(n),rd(n);
    for(i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]>=-0.5&&v[i]<=0)
        {
            rd[i]=0;
        }
        else
        {
            rd[i]=llround(v[i]);
        }
        sum=sum+rd[i];
    }
    if(sum>0)
    {
        for(i=0; i<n; i++)
        {
            if(rd[i]>v[i])
            {
                rd[i]--;
                sum--;
                if(sum==0)
                {
                    break;
                }
            }
        }
    }
    if(sum<0)
    {
        for(i=0; i<n; i++)
        {
            if(rd[i]<v[i])
            {
                rd[i]++;
                sum++;
                if(sum==0)
                {
                    break;
                }
            }
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<rd[i]<<endl;
    }
}
