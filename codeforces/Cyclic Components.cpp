#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v(200000);
vector<char> in(200000);
char findif(int h)
{
    in[h]='V';
    if(v[h].size()==2)
    {
        int a=v[h][0],b=v[h][1];
        if(in[a]=='V'&&in[b]=='V')
        {
            in[h]='C';
            return 'C';
        }
        else
        {
            if(in[a]=='W'||in[b]=='W')
            {
                in[h]='W';
                return 'W';
            }
            else if(in[a]=='N')
            {
                in[h]=findif(a);
                return in[h];
            }
            else if(in[b]=='N')
            {
                in[h]=findif(b);
                return in[h];
            }
        }
    }
        in[h]='W';
        return 'W';
}
int main()
{
    int n,m,ans=0,i;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(i=1; i<=n; i++)
    {
        in[i]='N';
    }
    for(i=1; i<=n; i++)
    {
        if(in[i]=='N')
        {
            char val=findif(i);
            if(val=='C')
            {
                ans++;
            }
        }
    }
    /*for(i=1; i<=n; i++)
    {
        cout<<in[i]<<" ";
    }
    cout<<endl;*/
    cout<<ans;
}
