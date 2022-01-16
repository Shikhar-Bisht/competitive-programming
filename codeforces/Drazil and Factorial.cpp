#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string s;
    cin>>s;
    vector <int> v;
    for(i=0;i<n;i++)
    {
        int var=s[i]-'0';
        if(var>1)
        {
            if(var<4)
            {
                v.push_back(var);
            }
            else if(var==4)
            {
                v.push_back(2);
                v.push_back(2);
                v.push_back(3);
            }
            else if(var==5)
            {
                v.push_back(var);
            }
            else if(var==6)
            {
                v.push_back(3);
                v.push_back(5);
            }
            else if(var==7)
            {
                v.push_back(var);
            }
            else if(var==8)
            {
                v.push_back(2);
                v.push_back(2);
                v.push_back(2);
                v.push_back(7);
            }
            else
            {
                v.push_back(3);
                v.push_back(3);
                v.push_back(2);
                v.push_back(7);
            }
        }
    }
    sort(v.begin(),v.end());
    for(i=v.size()-1;i>=0;i--)
    {
        cout<<v[i];
    }
}
