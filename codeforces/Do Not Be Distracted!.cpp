#include<bits/stdc++.h>
#include<vector>
using namespace std;
void check(int x)
{
    int i;
    vector<char> v[27];
    for(i=0; i<x; i++)
    {
        char key,before;
        cin>>key;
        if(i!=0)
        {
            if(key==before)
                continue;
            else
            {
                if(find(v.begin(),v.end(),key)!=v.end())
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
        if(find(v.begin(),v.end(),key)==v.end())
        {
            v.push_back(key);
        }
        before=key;
    }
    cout<<"YES"<<endl;
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        check(x);
    }
    return 0;
}
