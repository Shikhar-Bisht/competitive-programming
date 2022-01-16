#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,i,j,flag=0;
        cin>>l;
        string s,t;
        cin>>s>>t;
        for(i=0;i<l;i++)
        {
            if(s[i]!=t[i])
            {
                flag=1;
                for(j=i+1;j<l;j++)
                {
                    if(t[j]==t[i]&&t[j]!=s[j])
                    {
                        //cout<<s[i]<<" "<<t[j]<<endl;
                        char temp=t[j];
                        t[j]=s[i];
                        s[i]=temp;
                        //cout<<s[i]<<" "<<t[j]<<endl;
                        break;
                    }
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        //cout<<s<<endl;
        //cout<<t<<endl;
        if(s==t)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
