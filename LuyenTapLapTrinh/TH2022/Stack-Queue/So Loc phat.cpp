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

// Author: Nguyen Quoc Dat
// ID: B20DCPT053
// Organization: PTIT
// Date:
// Program: 
// -------------------  Your code STARTS here !!!---------------------------

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
	cout.tie(NULL);
	
    queue<string> q;
    vector<string> v;
    q.push("6");
    q.push("8");
    v.push_back("6");
    v.push_back("8");
    while(v.size() <= 10000){
        string s = q.front();
        q.pop();
        q.push(s + "6");
        q.push(s + "8");
        v.push_back(s + "6");
        v.push_back(s + "8");
    }
    int t; cin >> t;
    while (t--) {
    	int n; cin >> n;
        for(int i = 0; i < n; ++i){
            string s = v[i];
            reverse(s.begin(), s.end());
            cout << v[i] << s << " ";
        }
        cout << endl;
    }
    return 0;
}
