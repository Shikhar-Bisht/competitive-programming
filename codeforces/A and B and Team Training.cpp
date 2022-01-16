#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,mini,maxi,tempma;
    cin>>a>>b;
    if(a==b)
    {
        cout<<(a+b)/3;
    }
    else
    {
        mini=min(a,b);
        maxi=max(a,b);
        tempma=maxi/2;
        if(tempma>=mini)
        {
            cout<<mini;
        }
        else
        {
            long long var=mini-tempma;
            tempma=tempma-var;
            mini=mini-tempma;
            maxi=maxi-(tempma*2);
            //cout<<maxi<<" "<<mini<<endl;
            long long n=mini+maxi,ans;
            n=n/3;
            ans=tempma+n;
            cout<<ans;
        }
    }
}
