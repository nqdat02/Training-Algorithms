#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
    	int n; cin >> n;
        queue<string> q;
        vector<string> v; 
		q.push("4");
		q.push("5");
		for(int i = 1; i <= n; i ++){
			string tmp = q.front();
			string t = q.front();
			reverse(t.begin(), t.end());
			q.pop();
			q.push(tmp + "4");
			q.push(tmp + "5");
			v.push_back(tmp + t);
		}
		for(int i = 0; i < n; i ++)
			cout << v[i] << " ";
		cout << endl; 
    }
    return 0;
}