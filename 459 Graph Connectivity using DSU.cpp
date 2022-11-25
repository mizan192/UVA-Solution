//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 27;
int  pr[N];

int get_index(char c) {
	return c - 'A';
}

int find_parent(int u) {
	if (u == pr[u]) return u;
	return pr[u] = find_parent(pr[u]); // alternative of 11 & 12 line
}

void update(int u, int v) {
	int pu = find_parent(u);
	int pv = find_parent(v);
	pr[pu] = pv;
}


int main()
{
	int t;
	string node, edge;
	cin >> t;
	getchar();

	while (t--) {
		cin >> node;
		getchar();
		int mxNode = get_index(node[0]) + 1;
		for (int i = 0; i < mxNode; i++) pr[i] = i;

		while (getline(cin, edge) && edge != "") {
			int u = get_index(edge[0]);
			int v = get_index(edge[1]);
			update(u, v);
		}

		unordered_set<int>st;
		for (int i = 0; i < mxNode; i++) {
			int parent = find_parent(i);
			st.insert(parent);
		}
		cout << st.size() << "\n";
		if (t) cout << "\n";
	}

	return 0;
}




