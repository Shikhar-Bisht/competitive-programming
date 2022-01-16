#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int flag =0;
    cin>>s1>>s2;
    int l1=s1.length();
    int l2=s2.length();
    if(l1!=l2)
    {
        cout<<"NO";
    }
    else
    {
        for(int i=0; i<l1; i++)
        {
            if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
            {
                if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')
                {
                    continue;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
            if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')
            {
                if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
                {
                    continue;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    return 0;
}
