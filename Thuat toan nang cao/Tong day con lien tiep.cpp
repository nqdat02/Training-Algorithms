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
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		ll x = 0, res = 0;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			x += a[i];
			if (sum % x == 0) {
				ll y = 0; cnt = 1;
				for (int j = i + 1; j < n; j++) {
					if (y < x) {
						y += a[j];
					}
					if (y == x) {
						cnt++;
						y = 0;
					}
					if (y > x) {
						y = 0;
						break;
					}

				}
				if (sum / x == cnt) {
					res = x;
					break;
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}