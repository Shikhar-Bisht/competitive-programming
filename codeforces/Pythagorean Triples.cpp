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
        long long var=3,ans=0;
        long long temp=var*var;
        temp=temp/2;
        temp++;
        while(temp<=n)
        {
            ans++;
            var=var+2;
            temp=var*var;
            temp=temp/2;
            temp++;
        }
        cout<<ans<<endl;
    }
}
