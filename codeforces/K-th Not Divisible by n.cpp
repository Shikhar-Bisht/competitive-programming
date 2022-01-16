#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int temp=n-1;
        int var=k/temp;
        var=var*n;
        if(k%temp==0)
        {
            cout<<var-1<<endl;
        }
        else
        {
            int var1=k%temp;
            cout<<var+var1<<endl;
        }
    }
}
