#include<bits/stdc++.h>
using namespace std;
void lps(string s,int l,int arr[])
{
    int len=0,i=1;
    arr[0]=0;
    while(i<l)
    {
        if(s[i]==s[len])
        {
            len++;
            arr[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
            {
                len=arr[len-1];
            }
            else
            {
                arr[i]=0;
                i++;
            }
        }
    }
}
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int arr[l];
    lps(s,l,arr);
    for(int i=0;i<l;i++)
        cout<<arr[i]<<" ";
}
