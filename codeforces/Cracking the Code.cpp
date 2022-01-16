#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll var=0;
    var=var*10+(s[0]-'0');
    var=var*10+(s[2]-'0');
    var=var*10+(s[4]-'0');
    var=var*10+(s[3]-'0');
    var=var*10+(s[1]-'0');
    //cout<<var<<endl;
    ll n=var;
    int i;
    for(i=0;i<4;i++)
    {
        var=var*n;
        var=var%100000;
        //cout<<var<<endl;
    }
    vector<ll> v;
    for(i=0;i<5;i++)
    {
        ll num=var%10;
        v.push_back(num);
        var=var/10;
    }
    for(i=4;i>=0;i--)
    {
        cout<<v[i];
    }
}
