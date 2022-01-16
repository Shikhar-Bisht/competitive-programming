#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[26];
    char x='a';
    for(int i=0;i<26;i++)
    {
        arr[i]=x+i;
    }
    int l;
    cin>>l;
    string s;
    cin>>s;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(s[i]==arr[j])
            {
                arr[j]='0';
                break;
            }
        }
    }
    for()

return 0;
}

