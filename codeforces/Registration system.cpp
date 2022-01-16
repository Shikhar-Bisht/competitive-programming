#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    string arr[n];
    map<string,int> m;
    map<string,string> m1;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(m[arr[i]]==0)
        {
            m[arr[i]]++;
            arr[i]="OK";
            m1[arr[i]]="0";
        }
        else
        {
            string var=m1[arr[i]];
            int l=var.length();
            int temp=l-1;
            while(var[temp]=='9')
            {
                temp--;
                if(temp==-1)
                {
                    break;
                }
            }
            if(temp==-1)
            {
                var="1";
                for(j=0; j<l; j++)
                {
                    var=var+"0";
                }
            }
            else
            {
                var[temp]=var[temp]+1;
                for(j=temp+1; j<l; j++)
                {
                    var[j]='0';
                }
            }
            m1[arr[i]]=var;
            arr[i]=arr[i]+var;
            m[arr[i]]++;
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
