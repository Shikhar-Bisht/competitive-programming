#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
        }
        else if(n%3==0)
        {
            cout<<n/3<<" "<<n/3*2<<endl;
        }
        else
        {
            int m=-1;
            for(int i=5; i<=sqrt(n); i=i+2)
            {
                if(n%i==0)
                {
                    m=i;
                    break;
                }
            }
            if(m==-1)
            {
                cout<<1<<" "<<n-1<<endl;
            }
            else
            {
                int temp=n/m;
                cout<<temp<<" "<<n-temp<<endl;
            }
        }
    }
}
