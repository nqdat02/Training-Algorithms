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

void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

typedef string bint;
bint operator*(bint a, int b) {
    if (a == "0" || b == 0)
        return "0";
    int n = a.length();
    bint c(n, '0');
    int nho = 0;
    for (int i = n - 1; i >= 0; i--) {
        nho += (a[i] - '0') * b;
        c[i] = nho % 10 + '0';
        nho /= 10;
    }
    if (nho > 0)
        c = to_string(nho) + c;
    return c;
}

bint CATALAN(int n) {
    vector<int> tu;
    for (int i = n + 2; i <= 2 * n; i++) tu.push_back(i);
    for (int i = 2; i <= n; i++) {
        int x = i;
        for (int j = 0; j < tu.size() && x > 1; j++) {
            int d = __gcd(tu[j], x);
            x /= d;
            tu[j] /= d;
        }
    }
    bint res = "1";
    for (int i = 0; i < tu.size(); i++) res = res * tu[i];
    int ll = res.length();
    if(ll > 10){
        res = res.substr(0, 5) + "..." + res.substr(ll - 5, ll - 1);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    cout << CATALAN(n / 2) << endl;
    }
    return 0;
}