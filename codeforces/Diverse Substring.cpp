#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,flag=0;
    cin>>n;
    string s;
    cin>>s;
    char s1=s[0];
    for(i=0;i<n;i++)
    {
        if(s[i]!=s1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
        cout<<s1<<s[i];
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
