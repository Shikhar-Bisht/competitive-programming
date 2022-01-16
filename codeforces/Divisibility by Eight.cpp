/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length(),flag=0;
    int var=pow(2,l),i;
    var=var-1;
    for(i=1;i<var;i++)
    {
        int temp=0;
        for(int j=0;j<l;j++)
        {
            if((i>>j)&1==1)
            {
                temp=temp*10+(s[j]-'0');
                temp=temp%8;
            }
        }
        //cout<<temp<<endl;
        if(temp==0)
        {
            //cout<<i<<endl;
            //cout<<temp<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES"<<endl;
        for(int j=0;j<l;j++)
        {
            if((i>>j)&1==1)
            {
                cout<<s[j];
            }
        }
    }
}

#include <bits/stdc++.h>

using namespace std;

#define sz(x) (int) x.size()
#define all(a) a.begin(), a.end()
#define prev sadasdjksgjkasjdklaj

const int MAXN = 105;

string s;
int n;
bool dp[MAXN][8];
int prev[MAXN][8];

int main() {

    getline(cin, s);
    n = sz(s);

    memset(prev, -1, sizeof(prev));

    dp[0][(s[0] - '0') % 8] = true;

    for (int i = 1; i < n; i++) {
        dp[i][(s[i] - '0') % 8] = true;

        for (int j = 0; j < 8; j++) {
            if (dp[i - 1][j]) {
                dp[i][(j * 10 + s[i] - '0') % 8] = true;
                prev[i][(j * 10 + s[i] - '0') % 8] = j;

                dp[i][j] = true;
                prev[i][j] = j;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (dp[i][0]) {
            string ans = "";
            int curI = i, curJ = 0;

            while (true) {
                if (prev[curI][curJ] == -1 || prev[curI][curJ] != curJ) {
                    ans.append(1, s[curI]);
                }

                if (prev[curI][curJ] == -1) break;

                curJ = prev[curI][curJ];
                curI--;
            }

            puts("YES");
            reverse(all(ans));
            cout << ans << endl;
            return 0;
        }
    }

    puts("NO");

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length(),i,j,k,flag=0;
    for(i=0;i<l;i++)
    {
        for(j=i;j<l;j++)
        {
            for(k=j;k<l;k++)
            {
                int temp;
                if(i==j&&j==k)
                {
                    temp=s[i]-'0';
                }
                else if(i==j||j==k)
                {
                    temp=10*(s[i]-'0')+(s[k]-'0');
                }
                else
                {
                    temp=100*(s[i]-'0')+10*(s[j]-'0')+(s[k]-'0');
                }
                if(temp%8==0)
                {
                    flag=1;
                    cout<<"YES"<<endl;
                    cout<<temp;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO";
    }
}
