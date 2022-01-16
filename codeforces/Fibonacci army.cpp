#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=1;
    while(n--)
    {
        int c=b;
        b=a+b;
        a=c;
    }
    cout<<b;
}
