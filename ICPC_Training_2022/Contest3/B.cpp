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
	v(int) M(n);
	cin(M, n);
	stack<int> Q;
	int cnt = 0, countzo = 0;
	while (M[n - 1] == 0) {
		Q.push(0);
		n--;
		countzo ++;
	}
	if(countzo == M.size()){
		for(int i = 0; i < M.size(); ++i) cout << 0 << endl;
		return 0;
	}
	Q.push(1);
	cnt = 1;

	for (int i = n - 2; i >= 0; i--) {
		if (M[i] <= M[i + 1]) {
			Q.push(cnt);
		}
		else {
			Q.push(cnt + 1);
			cnt++;
		}
	}
	if (Q.top() != k) {
		cout << "ambiguous\n";
		return 0;
	}

	while (Q.size()) {
		cout << Q.top() << endl;
		Q.pop();
	}
}
