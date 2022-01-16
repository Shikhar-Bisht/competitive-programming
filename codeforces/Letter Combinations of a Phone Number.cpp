#include<bits/stdc++.h>
using namespace std;
int main()
{
    string digits;
    cin>>digits;
    map<char,string> m;
    vector<string> v;
    int i;
    m['2']="abc";
    m['3']="def";
    m['4']="ghi";
    m['5']="jkl";
    m['6']="mno";
    m['7']="pqrs";
    m['8']="tuv";
    m['9']="wxyz";
    int l=digits.length();
    if(l==0)
    {
        for(i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    else if(l==1)
    {
        for(i=0; i<m[digits[0]].length(); i++)
        {
            string s="";
            s=s+m[digits[0]][i];
            v.push_back(s);
        }
        for(i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    else
    {
        int arr[digits.length()];
        for(i=0; i<digits.length(); i++)
        {
            arr[i]=0;
        }
        while(true)
        {
            string s="";
            for(i=0; i<digits.length(); i++)
            {
                s=s+m[digits[i]][arr[i]];
            }
            v.push_back(s);
            i=l;
            int c=0,flag=0;
            while(arr[i-1]==m[digits[i-1]].length()-1)
            {
                i--;
                c++;
                if(c==l)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
            arr[i-1]++;
            for(i=i; i<l; i++)
                arr[i]=0;
        }
        for(i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
}

