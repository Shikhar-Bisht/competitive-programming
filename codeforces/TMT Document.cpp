#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=0,flag=0;
        cin>>n;
        string s;
        cin>>s;
        if(n%3!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int temp=n/3;
        for(i=0;i<n;i++)
        {
            if(s[i]=='T')
            {
                c++;
            }
            else
            {
                c--;
            }
            if(c<0)
            {
                flag=1;
                break;
            }
            if(c>temp)
            {
                flag=1;
                break;
            }
        }
        if(flag==0&&c==temp)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
