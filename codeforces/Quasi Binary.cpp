#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    while(n>0)
    {
        int temp=n;
        int c=0,ans=0;
        while(temp>0)
        {
            int var=temp%10;
            if(var>0)
            {
                ans=ans+pow(10,c);
                c++;
            }
            else
            {
                c++;
            }
            temp=temp/10;
        }
        v.push_back(ans);
        n=n-ans;
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
