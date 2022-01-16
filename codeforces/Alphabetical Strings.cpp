#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,l,flag=0;
        string s;
        cin>>s;
        l=s.length();
        for(int i=0; i<l; i++)
        {
            if(s[i]=='a')
            {
                x=i-1;
                y=i+1;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        char var='b';
        flag=0;
        while(x>=0||y<l)
        {
            if(x>=0&&s[x]==var)
            {
                x--;
                var++;
            }
            else if(y<l&&s[y]==var)
            {
                y++;
                var++;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
