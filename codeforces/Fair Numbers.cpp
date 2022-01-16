#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,a,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=n;
        while(k>0)
        {
            a=k%10;
            k=k/10;
            if(a>0&&n%a!=0)
            {
                n++;
                k=n;
            }
        }
        cout<<n<<endl;
    }

}
