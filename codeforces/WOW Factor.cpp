#include <iostream>
#include <string>

using namespace std;
typedef long long ll;

int main() {
    string S; cin >> S;
    ll a = 0, b = 0, c = 0;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'o') {
            b += a;
        } else if (i > 0 && S[i-1] == 'v') {
            a++;
            c += b;
        }
    }
    cout << c << endl;
}
/*#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll l=s.length(),i=0,j,ans=0;
    vector<ll> v;
    while(i<l&&s[i]=='o')
    {
        i++;
        if(i==l)
        {
            break;
        }
        if(s[i]=='v')
        {
            if(i+1<l)
            {
                if(s[i+1]=='v')
                {
                    continue;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                i++;
            }
        }
    }
    for(i=i; i<l; i++)
    {
        ll c=0;
        while(i<l&&s[i]=='v')
        {
            c++;
            i++;
        }
        c--;
        if(c!=0)
            v.push_back(c);
        c=0;
        while(i<l&&s[i]=='o')
        {
            i++;
            c++;
            if(i==l)
            {
                break;
            }
            if(s[i]=='v')
            {
                if(i+1<l)
                {
                    if(s[i+1]=='v')
                    {
                        continue;
                    }
                    else
                    {
                        i++;
                    }
                }
                else
                {
                    i++;
                }
            }
        }
        if(c!=0)
            v.push_back(c);
        i--;
    }
    ll var=0,var1=0;
    for(i=0;i<v.size();i++)
    {
        if(i%2==0)
        {
            var=var+v[i];
            ll temp;
            temp=var1*v[i];
            ans=ans+temp;
        }
        else
        {
            ll temp1;
            temp1=var*v[i];
            ll temp2;
            temp2=var1+temp1;
            var1=temp2;
        }
    }
    cout<<ans;
}*/
