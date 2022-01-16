#include<bits/stdc++.h>
#define ll long long
#define vl vector<ll>
using namespace std;
void solut() {
    ll n;
    cin >> n;
    vl a(n);
    for (int it = 0; it < n; it++) { cin >> a[it]; }
    set<ll>s;
    for (int it = 0; it < n; it++) {
        bool flag = true; ll num = a[it];
        while (flag && num > 0) {
            if ( num > 0 && num <= n && s.find(num) == s.end()) {
                s.insert(num);
                flag = false;
            }
            else {
                num = num / 2;
            }
        }
    }
    if (s.size() == n) { cout << "YES\n"; }
    else { cout << "NO\n"; }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solut();
    }
}
