#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,var1,var2;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            int temp;
            cin>>temp;
            if(temp==1)
            {
                var1=i;
                var2=j;
            }
        }
    }
    cout<<abs(2-var1)+abs(2-var2);
}
