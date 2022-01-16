#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=0,c=0;
        cin>>n;
        vector<int> v;
        while(n>0)
        {
            int temp=0;
            temp=n%10;
            if(temp!=0)
            {
                c++;
                v.push_back(temp*pow(10,i));
            }
            n=n/10;
            i++;
        }
        cout<<c<<endl;
        for(i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        v.clear();
        cout<<endl;
    }
}
