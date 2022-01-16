#include<bits/stdc++.h>
using namespace std;
void solution(long long int x,long long int y,long long int z)
{
    if(x==0 && y==0 && z==0)
    {
        cout<<0<<" "<<0;
        return;
    }
    if((x%z+y%z)>=z)
    {
        cout<<x/z+y/z+1<<" ";
        if(z-x%z<z-y%z)
            cout<<z-x%z;
        else
            cout<<z-y%z;
    }
    else
    {
        cout<<x/z+y/z<<" ";
        cout<<0;
    }
}
int main()
{
    long long int x,y,z;
    cin>>x>>y>>z;
    solution(x,y,z);
    return 0;
}
