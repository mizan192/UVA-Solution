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

int parent[MAX], size[MAX];
map<string, int> m;

int find_parent(int u) {
	if (u == parent[u]) return u;
	return parent[u] = find_parent(parent[u]);
}

int union_set(int a, int b) {
	int pa = find_parent(a);
	int pb = find_parent(b);
	if (pa == pb) {
		return size[pa];
	}
	else {

		int s1 = size[pa];
		int s2 = size[pb];

		int total = s1 + s2;


		parent[pa] = pb;

		size[pb] = total;

		return total;
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
		m.clear();
		memset(size, 0, sizeof(size));
		memset(parent, 0, sizeof(parent));

		vector<pair<string, string>> v;
		set<string>st;
		lop(i, n) {
			cin >> a >> b;
			v.pb(mp(a, b));
			st.insert(a);
			st.insert(b);
		}

		int num = 1;
		for (auto x : st) {
			m[x] = num;
			parent[num] = num;
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




