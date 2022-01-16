#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i;
    cin>>n;
    vector<string> v;
    for(i=0; i<n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s,val="-";
        int c=0;
        cin>>s;
        for(i=0; i<n; i++)
        {
            if(v[i].find(s)!=string::npos)
            {
                c++;
                if(val=="-")
                {
                    val=v[i];
                }
            }
        }
        cout<<c<<" "<<val<<endl;
    }
}
