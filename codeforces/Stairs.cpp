#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,p=0,var=1,c=0;
        cin>>n;
        while(true)
        {
            long long temp=p*4+var;
            if(temp<=n)
            {
                c++;
                n=n-temp;
                p=temp;
                var=var*2;
            }
            else
            {
                break;
            }
        }
        cout<<c<<endl;
    }
}

