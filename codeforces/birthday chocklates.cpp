#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c=0,sum=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    int d,m;
    cin>>d>>m;
    for(i=0;i<n-m+1;i++)
    {
        for(j=i;j<i+m;j++)
        {
            sum=sum+arr[j];
        }
        cout<<sum<<endl;
        if(sum==d)
            c++;
        sum=0;
    }
    cout<<c;
    return 0;
}
