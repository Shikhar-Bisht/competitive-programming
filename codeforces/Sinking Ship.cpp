#include<bits/stdc++.h>
using namespace std;
struct member
{
    string st1,st2;
};
int main()
{
    int x,i,j;
    cin>>x;
    struct member m[x];
    for(i=0; i<x; i++)
        cin>>m[i].st1>>m[i].st2;
    for(j=0; j<4; j++)
    {
        for(i=0; i<x; i++)
        {
            if(j==0)
            {
                if(m[i].st2=="rat")
                    cout<<m[i].st1<<endl;
            }
            else if(j==1)
            {
                if(m[i].st2=="woman"||m[i].st2=="child")
                    cout<<m[i].st1<<endl;
            }
            else if(j==2)
            {
                if(m[i].st2=="man")
                    cout<<m[i].st1<<endl;
            }
            else
            {
                if(m[i].st2=="captain")
                    cout<<m[i].st1<<endl;
            }
        }
    }
    return 0;
}
