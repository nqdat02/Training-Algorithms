#include<bits/stdc++.h>
#define mod                 1000000007
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
	int n, k; cin >> n >> k;
	v(p(int)) M(n);
	map<int, pq(int)> X;
	for (auto&c : M) {
		cin >> c.x >> c.y;
		X[c.y].push(c.x);
	}

	ll sum = 0;
	for (int i = k; i >= 0; i--) {
		int f = 0;
		int u = 0;
		int y = 0;
		for (int j = i; j <= k; j++) {
			if (X[j].size() && u < X[j].top()) {
				f = j;
				y++;
				u = X[j].top();
			}
		}
		if (y != 0) {

			sum += X[f].top();
			X[f].pop();
		}
	}
	cout << sum << endl;


}

//__________________________B20DCPT173__________________________//