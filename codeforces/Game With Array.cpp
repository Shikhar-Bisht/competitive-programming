#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int temp=s/n;
    if(temp<=1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n-1;i++)
        {
            cout<<temp<<" ";
        }
        int var=temp*(n-1);
        var=s-var;
        cout<<var<<endl;
        cout<<1<<endl;
    }
}
