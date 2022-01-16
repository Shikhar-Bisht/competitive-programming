#include<bits/stdc++.h>
using namespace std;
string inttostr(int x)
{
    string ans="";
    if(x>9)
    {
        char c = char(65+(x-10));
        ans=ans+c;
        return ans;
    }
    stringstream ss;
    ss<<x;
    ss>>ans;
    return ans;
}
int main()
{
    long long int x;
    cin>>x;
    string s="";
    while(x>0)
    {
        int temp=x%16;
        string s1=inttostr(temp);
        s=s+s1;
        x=x/16;
    }
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}

