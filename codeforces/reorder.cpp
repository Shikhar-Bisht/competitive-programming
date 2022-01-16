#include<iostream>
#define floop(i,k,n) for(int i=k;i<n;++i)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i;
        double sum=0,d;
        cin>>n>>m;
        double arr[n];
        floop(i,0,n)
        cin>>arr[i];
        floop(i,0,n)
            sum=sum+arr[i];
        if(sum==m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
