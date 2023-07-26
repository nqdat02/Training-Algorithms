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

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<pair<int, int >> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(a.begin(), a.end());
		int min_xor = 1 << k;
		int min_xor_index = -1;

		for (int i = 0; i < n - 1; ++i) {
			if ((a[i].first ^ a[i + 1].first) < min_xor) {
				min_xor = a[i].first ^ a[i + 1].first;
				min_xor_index = i;
			}
		}
		int x = a[min_xor_index].second;
		int y = a[min_xor_index + 1].second;
		int x_mask = ((1 << k) - 1) ^ a[min_xor_index].first;
		cout << x + 1 << " " << y + 1 << " " << x_mask;
		cout << endl;
	}
	return 0;
}