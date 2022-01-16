#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    long long int t,p,c=0;
    vector<int> v1;
    cin>>t>>p;
    long long int l=1;
    //cout<<p<<endl;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        long long int arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        //for(i=0; i<n; i++)
        //{
            //cout<<arr[i]<<" ";
        //}
        //cout<<endl;
        for(i=0; i<n; i++)
        {
            if(p>arr[i])
            {
                //cout<<arr[i]<<endl;
                c++;
                v1.push_back(l);
                break;
            }
        }
        l++;
    }
    cout<<c<<endl;
    for (int i = 0; i< v1.size(); ++i)
    cout << v1[i] << " ";

    return 0;
}
