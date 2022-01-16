#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m;
    cin>>n>>m;
    map<int,int> ma;
    for(i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        ma[a]=1;
        ma[b]=1;
    }
    int var;
    for(i=1;i<=n;i++)
    {
        if(ma[i]==0)
        {
            var=i;
            break;
        }
    }
    cout<<n-1<<endl;
    for(i=1;i<=n;i++)
    {
        if(i==var)
        {
            continue;
        }
        cout<<var<<" "<<i<<endl;
    }
}
