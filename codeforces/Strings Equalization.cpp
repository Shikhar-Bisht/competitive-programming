#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        int i,j,flag=0;
        cin>>s>>t;
        int l=s.length();
        for(i=0; i<l; i++)
        {
            for(j=0;j<l;j++)
            {
                if(s[i]==t[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        //cout<<s<<" "<<t<<endl;
        if(flag==1)
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
