#include<bits/stdc++.h>
using namespace std;
struct tags
{
    string st1,st2;
};
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    struct tags t[n];
    for(i=0; i<n; i++)
        cin>>t[i].st1>>t[i].st2;
    for(i=0; i<m; i++)
    {
        string str1,str2;
        cin>>str1>>str2;
        if(!str2.empty())
        {
            str2.pop_back();
        }
        for(j=0; j<n; j++)
        {
            if(str2==t[j].st2)
            {
                cout<<str1<<" "<<str2<<";"<<" "<<"#"<<t[j].st1<<endl;
                break;
            }
        }

    }
    return 0;
}
