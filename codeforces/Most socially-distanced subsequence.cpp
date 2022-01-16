#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        vector<int> v;
        v.push_back(arr[0]);
        for(i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
            {
                while(i<n&&arr[i]>arr[i-1])
                {
                    i++;
                }
                i--;
                v.push_back(arr[i]);
            }
            else
            {
                while(i<n&&arr[i]<arr[i-1])
                {
                    i++;
                }
                i--;
                v.push_back(arr[i]);
            }
        }
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
}
