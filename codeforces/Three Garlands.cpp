#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3],i;
    map<int,int> m;
    for(i=0;i<3;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    if(m[1]>=1)
    {
        cout<<"YES";
    }
    else if(m[2]>=2)
    {
        cout<<"YES";
    }
    else if(m[3]>=3)
    {
        cout<<"YES";
    }
    else if(m[2]==1&&m[4]==2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
