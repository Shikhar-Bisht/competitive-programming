#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    int k1=k;
    map<int,int> m;
    queue<int> screen;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(k>0)
        {
            if(m[temp]==0)
            {
                screen.push(temp);
                m[temp]++;
                k--;
            }
        }
        else
        {
            if(m[temp]==0)
            {
                int var=screen.front();
                screen.pop();
                screen.push(temp);
                m[var]--;
                m[temp]++;
            }
        }
    }
    int var=screen.size();
    int arr[var];
    i=0;
    while(!screen.empty())
    {
        arr[i]=screen.front();
        screen.pop();
        i++;
    }
    cout<<var<<endl;
    for(i=var-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}
