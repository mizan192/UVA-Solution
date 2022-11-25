//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define lop(i,n) for(i=0;i<n;i++)
#define MAX 200005

int pr[MAX], size[MAX];
map<string, int> m;

int find_parent(int u) {
	if (u == pr[u]) return u;
	return pr[u] = find_parent(pr[u]);
}

int union_set(int u, int v) {
	int pu = find_parent(u);
	int pv = find_parent(v);
	if (pu == pv) {
		return size[pu];
	}
	else {
		int mxSize = max(size[pu], size[pv]);
		int mnSize = min(size[pu], size[pv]);
		int newSize = mxSize + mnSize;
		pr[pu] = pv;
		size[pv] = newSize;
		return newSize;
	}

}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int i, n;
		cin >> n;
		string a, b;

		vector<pair<string, string>> v;
		unordered_set<string>st;
		lop(i, n) {
			cin >> a >> b;
			v.pb(mp(a, b));
			st.insert(a);
			st.insert(b);
		}

		int num = 1;
		for (auto x : st) {
			m[x] = num;
			pr[num] = num;
			size[num] = 1;
			num++;
		}

		for (auto x : v) {
			int a = m[x.ff];
			int b = m[x.ss];
			cout << union_set(a, b) << nl;
		}

	}





	return 0;
}




