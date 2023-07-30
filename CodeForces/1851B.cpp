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
		ll n; cin >> n;
		vector<ll> v(n);
		for(auto &x: v) cin >> x;
		vector<ll> o, e;
		for(int i = 0; i < n; ++i){
			if(v[i] & 1){
				o.push_back(v[i]);
			}else e.push_back(v[i]);
		}
		sort(e.begin(), e.end());
		sort(o.begin(), o.end());
		vector<ll> pref;
		int op = 0, ep = 0;
		for(auto x: v){
			if(x & 1){
				pref.push_back(o[op]);
				op ++;
			}else{
				pref.push_back(e[ep]);
				ep ++;
			}
		}
		if(is_sorted(pref.begin(), pref.end())){
			cout << "YES";
		}
		else cout << "NO";
		cout << endl;
	}
	return 0;
}