#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> p;
typedef vector<vector<int> > vt;
typedef vector<pair<int, int> > vp;
const ll mod = 1e9 + 7;
const int oo = 1e6 + 7;

#define f first
#define s second
#define pb push_back
#define ep emplace_back
#define sz(a) (int) a.size()
#define ms(s, n) memset(s, n, sizeof(s))
#define present(t, x) (t.find(x) != t.end())
#define all(a) (a.begin(), a.end())
#define For(i, l, r) for (int i = l; i <= r; i++)
#define Fod(i, r, l) for (int i = r; i >= l; i--)
#define fillchar(a, x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void FileIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int m, k, a1, ak;
		cin >> m >> k >> a1 >> ak;
		if (m <= a1) {
			cout << 0 << endl;
			continue;
		}
		if ((m / k <= ak && a1 >= m % k)) {
			cout << 0 << endl;
			continue;
		}
		int c = m - min(ak, m / k) * k - min(a1, m - min(ak, m / k) * k);
		if (c % k == 0)
			cout << c / k << endl;
		else if(k - c % k <= min(a1, m - min(ak, m / k) * k))
			cout << c / k + 1 << endl;
		else
			cout << c / k + c % k << endl;
	}
	return 0;
}