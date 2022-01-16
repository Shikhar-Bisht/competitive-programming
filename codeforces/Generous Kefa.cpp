#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,i,j,c=0;
    cin>>x>>n;
    string str;
    cin>>str;
    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
        {
            if(str[i]==str[j])
                c++;
        }
        if(c>n)
        {
            cout<<"NO";
            return 0;
        }
        c=0;
    }
    cout<<"YES";
    return 0;
}
