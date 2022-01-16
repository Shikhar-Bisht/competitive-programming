#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n/2;i++)
    {
        cout<<i+1<<" "<<n-i<<" ";
    }
    if(n%2!=0)
    {
        int temp=n/2;
        cout<<temp+1;
    }
}
