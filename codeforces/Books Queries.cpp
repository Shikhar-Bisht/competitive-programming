#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    map<int,int> ml,mr;
    int ll=0,lr=0;
    while(q--)
    {
        char c;
        int var;
        cin>>c>>var;
        if(c=='L')
        {
            ml[var]=ll;
            mr[var]=-1;
            ll++;
        }
        else if(c=='R')
        {
            mr[var]=lr;
            ml[var]=-1;
            lr++;
        }
        else
        {
            if(ml[var]!=-1)
            {
                int temp1=ll-ml[var]-1;
                int temp2=lr+ml[var];
                cout<<min(temp1,temp2)<<endl;
            }
            else
            {
                int temp1=lr-mr[var]-1;
                int temp2=ll+mr[var];
                cout<<min(temp1,temp2)<<endl;
            }
        }
    }
}
