#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,sa=0;
    cin>>n>>m;
    string s[n];
    for(i=0; i<n; i++)
        cin>>s[i];
    for(i=0; i<m; i++)
    {
        int flag=0;
        string temp;
        cin>>temp;
        for(j=0; j<n; j++)
        {
            if(temp==s[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            sa++;
        }
    }
    if(sa%2==1)
    {
        n=n-sa+(sa/2)+1;
    }
    else
    {
        n=n-sa+(sa/2);
    }
    m=m-sa+(sa/2);
    if(n>m)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
