#include<bits/stdc++.h>
#define MOD                 1000000007
#define ll                  long long
#define	p(x)                pair<x,x>
#define v(x)                vector<x>
#define Tree                node*
#define sz(a)               a.size()
#define x                   first
#define y                   second
#define pb(a)               push_back(a)
#define pf(a)               push_front(a)
#define FOR(i, l, r)        for (int i = l; i < r; i++)
#define FORX(i, l, r, x)    for (int i = l; i < r; i += x)
#define FORD(i, l, r)       for (int i = l; i >= r; i--)
#define correct(x, y, n, m) 0 <= (x)&&(x) < (n)& & 0 <= (y)&&(y) < (m)
#define cin(M, n)           FOR(i, 0, n)cin >> M[i]
#define cout(M, n)          FOR(i, 0, n)cout << M[i] << " "
#define rs(M, x)            memset(M, x, sizeof(M))
#define reset()             FOR(i, 0, 1001)A[i].clear(), check[i] = false
#define faster()            cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()               int t; cin >> t; while (t--)
#define pq(x)               priority_queue<x>
#define neg_pq(x)           priority_queue<x, vector<x>, greater<x>>
#define all(M)              M.begin(), M.end()
using namespace std;

//_______________________NGUYỄN_NGỌC_TOÀN_______________________//



int main() {
	faster();
	while (1) {
		ll n, m; cin >> n >> m;
		if (n == 0 && m == 0)break;

		if (n == 0) {
			cout << -m*m << endl;
			continue;
		}
		ll res = -1000000000000000000;
		for (int i = 1; i <= n; i++) {
			ll a = i - 1 + (n - i + 1) * (n - i + 1);
			ll sum = i + 1;
			ll mod = m % sum;
			ll div = m / sum;
			ll x = sum - mod;
			ll b = div * div * x + (div + 1) * (div + 1) * mod;
			res = max(res, a - b);
		} 
		cout << res << endl;
	}
}

//__________________________B20DCPT173__________________________//