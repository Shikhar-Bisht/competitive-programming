#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int mini,maxi;
        mini=min(a,b);
        maxi=max(a,b);
        if(maxi<=mini*2)
        {
            int var1=mini%3,var2=maxi%3;
            if(var1*2==var2||var2*2==var1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
