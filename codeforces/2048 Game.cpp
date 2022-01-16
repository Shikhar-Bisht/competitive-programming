#include<bits/stdc++.h>
using namespace std;
void sol()
{
    int n,i,j;
    cin>>n;
    vector<int> v;
    for( i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    for( i=0; i<n; i++)
    {
        if(v[i]==0)
        {
            continue;
        }
        int c=0;
        for(j=0; j<n; j++)
        {
            if(v[j]==2048)
            {
                cout<<"YES"<<endl;
                return;
            }
            if(j==i)
            {
                continue;
            }
            if(v[i]==v[j])
            {
                v[i]=v[i]*2;
                v[j]=0;
                c++;
            }
        }
        if(c==0)
        {
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        if(v[i]==2048)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}
