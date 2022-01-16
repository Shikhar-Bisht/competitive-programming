#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            int var=i*j;
            vector<char> v;
            while(var>0)
            {
                int temp=var%n;
                char c='0'+temp;
                v.push_back(c);
                var=var/n;
            }
            int l=v.size();
            int k;
            for(k=l-1;k>=0;k--)
            {
                cout<<v[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
