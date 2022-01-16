#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,var=0,minc=0,maxc=0;
    cin>>n>>m;
    map <string, int> ma;
    map <string, int>::iterator it;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<m;i++)
    {
        string temp;
        cin>>temp;
        if(ma[temp]==0)
        {
            var++;
        }
        ma[temp]++;
    }
    int num[var];
    i=0;
    for(it=ma.begin();it!=ma.end();it++)
    {
        num[i]=(*it).second;
        i++;
    }
    //for(i=0;i<var;i++)
        //cout<<num[i];
    //cout<<var;
    sort(arr,arr+n);
    sort(num,num+var);
    //for(i=0;i<n;i++)
        //cout<<arr[i]<<" ";
    //cout<<endl;
    //for(i=0;i<var;i++)
        //cout<<num[i]<<" ";
    for(i=0;i<var;i++)
    {
        int temp=num[i]*arr[var-1-i];
        minc=minc+temp;
    }
    int temp=0;
    for(i=n-var;i<n;i++)
    {
        maxc=maxc+(num[temp]*arr[i]);
        temp++;
    }
    cout<<minc<<" "<<maxc;

}
