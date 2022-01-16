#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1="";
    cin>>str;
    int l=str.length();
    cout<<l;
    for(int i=l-1;i>=0;i++)
        str1=str1+str[i];
    cout<<str1;
    return 0;

}
