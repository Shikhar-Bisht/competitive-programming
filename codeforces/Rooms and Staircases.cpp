#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,left1,right1,noofones=0,maxincorner,finalans;
        string s;
        cin>>n;
        cin>>s;
        for(i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                noofones++;
            }
        }
        if(noofones==0)
        {
            cout<<n<<endl;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                if(s[i]=='1')
                {
                    left1=i;
                    break;
                }
            }
            for(i=n-1; i>=0; i--)
            {
                if(s[i]=='1')
                {
                    right1=i;
                    break;
                }
            }
            left1=max(left1+1,n-left1);
            right1=max(right1+1,n-right1);
            maxincorner=max(right1*2,left1*2);
            //cout<<left1<<" "<<right1<<" "<<noofones<<endl;
            finalans=max(maxincorner,n+noofones);
            cout<<finalans<<endl;
        }
    }
    return 0;
}
