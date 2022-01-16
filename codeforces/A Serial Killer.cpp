#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st1,st2,st3,st4;
    cin>>st1>>st2;
    int x;
    cin>>x;
    cout<<st1<<" "<<st2<<endl;
    while(x--)
    {
    cin>>st3>>st4;
    if(st1==st3)
        st1=st4;
    else
        st2=st4;
    cout<<st1<<" "<<st2<<endl;
    }
    return 0;
}
