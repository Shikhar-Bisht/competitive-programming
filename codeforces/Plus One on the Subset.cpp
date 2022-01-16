#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,maxi,mini;
        cin>>n;
        for(i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            if(i==0)
            {
                maxi=temp;
                mini=temp;
            }
            else
            {
                if(temp>maxi)
                {
                    maxi=temp;
                }
                if(temp<mini)
                {
                    mini=temp;
                }
            }
        }
        cout<<maxi-mini<<endl;
    }
}
