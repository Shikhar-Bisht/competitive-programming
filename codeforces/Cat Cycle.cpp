#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    /*while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n%2==0)
        {
            cout<<n-((k-1)%n)<<endl;
        }
        else
        {
            cout<<n-(((k-1)+(k-1)/(n/2))%n)<<endl;
        }
    }*/
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n%2==0)
        {
            cout<<((k-1)%n)+1<<endl;
        }
        else
        {
            cout<<(((k-1)+(k-1)/(n/2))%n)+1<<endl;
        }
    }
}
