#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define sz(a) int((a).size())
#define f0(i,n) for (int i=0; i<n; i++)
#define f1(i,n) for (int i=1; i<=n; i++)
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define TC() int t; cin >> t; while (t--)
#define el cout << "\n"
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define maxn 

const int MOD = (int) 1e9+7;

void FileIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main(){
    TC(){
        int n, m; cin >> n >> m;
        int a[n][m];
        f0 (i, n) f0 (j, m) cin >> a[i][j];
        int kernel[3][3];
        f0 (i, 3) f0 (j, 3) cin >> kernel[i][j];
        vi v;
        f0 (i, n - 2){
            f0 (j, m - 2){
                int res = 0;
                f0 (k, 3){
                    f0 (l, 3) res += a[i + k][j + l] * kernel[k][l];
                }
                v.pb(res);
            }
        }
        ll ans = 0;
        for (int x : v) ans += x;
        cout << ans; el;
    }
    return 0;
}