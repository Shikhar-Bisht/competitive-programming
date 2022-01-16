#include<bits/stdc++.h>
using namespace std;
void sol(int n,long int m,string str)
{
    int i,j;
    string str1=str;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(str[j]=='0')
            {
                if(j==0)
                {
                    if(str[j+1]=='1')
                    {
                        str1[j]='1';
                    }
                    continue;
                }
                if(j==n-1)
                {
                    if(str[j-1]=='1')
                    {
                        str1[j]='1';
                    }
                    continue;
                }
                if((str[j+1]=='1'&&str[j-1]=='0')||(str[j+1]=='0'&&str[j-1]=='1'))
                    str1[j]='1';
            }
        }
        str=str1;
    }
    cout<<str<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long int m;
        string str;
        cin>>n>>m;
        cin>>str;
        sol(n,m,str);
    }
    return 0;
}
