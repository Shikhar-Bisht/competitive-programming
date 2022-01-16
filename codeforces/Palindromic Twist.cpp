#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,i;
        string s;
        cin>>l;
        cin>>s;
        int c=l/2,flag=0;
        for(i=0;i<c;i++)
        {
            if(abs(s[i]-s[l-i-1])==2||abs(s[i]-s[l-i-1])==0)
            {
                continue;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
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
