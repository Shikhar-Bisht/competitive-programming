#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int bags=1,bage=n*n;
    int val=n/2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<val;j++)
        {
            cout<<bags+j<<" ";
        }
        for(j=0;j<val;j++)
        {
            cout<<bage-val+j+1<<" ";
        }
        cout<<endl;
        bags=bags+val;
        bage=bage-val;
    }
    return 0;
}
