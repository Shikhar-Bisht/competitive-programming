#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int brr[n];
    map<int, int> m;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        m[temp]=i+1;
    }
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        brr[i]=m[temp];
    }
    for(i=0;i<n;i++)
    {
        cout<<brr[i]<<" ";
    }
}
