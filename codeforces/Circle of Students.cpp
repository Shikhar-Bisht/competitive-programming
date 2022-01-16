#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int n;
		cin >> n;
		vector<int> a(n);
		int pos = -1;
		for (int j = 0; j < n; ++j) {
			cin >> a[j];
			if (a[j] == 1) pos = j;
		}
		cout<<pos<<endl;
		bool okl = true, okr = true;
		for (int j = 1; j < n; ++j) {
                cout<<(pos-j+n)%n<<" "<<a[(pos - j + n) % n]<<" "<<j+1<<endl;;
			okl &= (a[(pos - j + n) % n] == j + 1);
			okr &= (a[(pos + j + n) % n] == j + 1);
		}
		if (okl || okr) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
