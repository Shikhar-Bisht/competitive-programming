#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int i;
    for(i=0;i<l;i++)
    {
        char ch=s[i];
        int c=0;
        while(i<l&&s[i]==ch)
        {
            c++;
            i++;
        }
        //cout<<c<<endl;
        if(c>1&&i<l)
        {
            int co=0;
            char ch1=s[i];
            while(i<l&&s[i]==ch1)
            {
                co++;
                i++;
            }
            //cout<<co<<endl;
            if(co>1)
            {
                cout<<ch<<ch<<ch1;
            }
            else
            {
                cout<<ch<<ch<<ch1;
            }
            i--;
        }
        else if(c>=2)
        {
            cout<<ch<<ch;
            i--;
        }
        else
        {
            cout<<ch;
            i--;
        }
    }
}
