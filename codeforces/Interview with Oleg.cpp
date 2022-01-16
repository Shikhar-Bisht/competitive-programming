#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    string str;
    cin>>n>>str;
    for(i=0;i<n;i++)
    {
        if(str[i]=='o' && str[i+1]=='g' && str[i+2]=='o')
        {
            cout<<"***";
            i=i+3;
            while(str[i]=='g'&&str[i+1]=='o'&&i<n)
            {
                i=i+2;
            }
            i=i-1;

        }
        else
        {
            cout<<str[i];
        }
    }
    return 0;
}
