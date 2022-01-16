#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int l,i,c=0,ans=0;
    l=str.length();
    for(i=0;i<l-1;i++)
    {
        c++;
        if(str[i]!=str[i+1]||c==5)
        {
            c=0;
            ans++;
        }
    }
    ans++;
    cout<<ans;
    return 0;
}

