#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,f=0;
        cin>>n;
        string s;
        cin>>s;
        vector<string> ans;
        ans.push_back("aa");
        ans.push_back("aba");
        ans.push_back("aca");
        ans.push_back("abca");
        ans.push_back("acba");
        ans.push_back("abbacca");
        ans.push_back("accabba");
        for(i=0;i<7;i++)
        {
            if(s.find(ans[i])!=string::npos)
            {
                cout<<ans[i].length()<<endl;
                f=1;
                break;
            }
        }
        if(f==1)
        {
            continue;
        }
        cout<<-1<<endl;
    }
    return 0;
}
