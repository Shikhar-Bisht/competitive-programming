#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string ,vector<int>> Map;
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        string temp;
        int temp1;
        cin>>temp>>temp1;
        Map[temp].push_back(temp1);
    }
    //string temp;
    //cin>>temp;
    //int l=Map[temp].size();
    //for(i=0;i<l;i++)
    //{
        //cout<<Map[temp][i];
    //}
    for(auto &name : Map)
    {
        cout<<name.first<<endl;
        /*for(auto &values : name.second)
        {
            cout<<values<<" ";
        }*/
        for(i=0;i<Map[name.first].size();i++)
        {
            cout<<Map[name.first][i]<<" ";
        }
        cout<<endl;
    }
}
