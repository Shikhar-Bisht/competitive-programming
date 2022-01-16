#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,c=0;
    cin>>l;
    string s;
    cin>>s;
    map<char,int> m;
    int i;
    for(i=0;i<l-1;i++)
    {

        if(s[i]==s[i+1])
        {
            c++;
            m[s[i]]++;
            if(i+2<l)
            {
                m[s[i+2]]++;
            }
            if(m['R']==0)
            {
                s[i+1]='R';
            }
            else if(m['B']==0)
            {
                s[i+1]='B';
            }
            else
            {
                s[i+1]='G';
            }
            i++;
            m.clear();
        }
    }
    cout<<c<<endl;
    cout<<s;
}
