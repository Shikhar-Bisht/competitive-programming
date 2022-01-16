#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long int w;
        cin >> n;
        cin >> w;
        int flag = 0;
        int q = 0;
        long long int a[n];
        long long int s = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= w)
            {
                if (s + a[i] > w && a[i] * 2 < w)
                    continue;
                else
                {
                    if (a[i] * 2 >= w)
                    {
                        q = i + 1;
                        flag = 1;
                        break;
                    }
                    v.push_back(i + 1);
                    s = s + a[i];
                }
            }
        }
        if (flag == 0)
        {
            if (v.size() != 0 && s * 2 >= w && s <= w)
            {

                cout << v.size() << endl;
                for (auto x : v)
                    cout << x << " ";
                cout << endl;
            }
            else
                cout << -1 << endl;
            continue;
        }
        else if (flag == 1)
        {
            cout << 1 << endl;
            cout << q << endl; //cout<<w<<endl;
            continue;
        }
    }
}
