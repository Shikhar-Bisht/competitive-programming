#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    vector<int> v;
    for(i=0; i<n; i++)
    {
        int flag=0;
        int var=arr[i];
        v.push_back(i+1);
        while(true)
        {
            for(int j=0; j<v.size(); j++)
            {
                if(v[j]==var)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                v.clear();
                break;
            }
            v.push_back(var);
            var=arr[var-1];
        }
        cout<<var<<" ";
    }
    return 0;
}
