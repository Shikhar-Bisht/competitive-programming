#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    map<int,int> m;
    int j=0;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(arr[j]==temp)
        {
            j++;
            while(j<n && m[arr[j]]==1)
            {
                j++;
            }
        }
        else
        {
            f++;
            m[temp]=1;
        }
    }
    cout<<f;
}
