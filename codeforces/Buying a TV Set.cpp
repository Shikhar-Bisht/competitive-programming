#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll gc = __gcd(c, d);
    c /= gc;
    d /= gc;
    cout << min(a/c, b/d);
}
