/*
	author: datnq02
*/

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
	FileIO();
	int t; cin >> t;
	while (t--) {
		int n = 10;
		char a[10][10];
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j) cin >> a[i][j];
		int res = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (a[i][j] == 'X') {
					if (i < 5) {
						if (j < 5) res += min(i, j) + 1;
						else res += min(i + 1, n - j);
					}
					else {
						if (j < 5) res += min(n - i, j + 1);
						else res += min(n - i, n - j);
					}
				}

			}
		}
		cout << res << endl;
	}
	return 0;
}