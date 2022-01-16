#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n%2==0)
        {
            while(n%2==0)
            {
                n=n/2;
            }
            if(n==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                //cout<<n<<endl;
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
