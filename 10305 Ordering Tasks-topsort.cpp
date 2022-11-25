#include <bits/stdc++.h>
using namespace std;
#define MAX 1000006
#define ll long long
#define MOD 1000000007
#define sc(n) scanf("%d",&n)
#define pr(n) printf("%d\n",n)


vector<int>gr[1000];
int n, m;
bool vis[1000];
stack<int>stk;

void dfs(int u)
{
	vis[u] = 1;
	for (auto v : gr[u])
	{
		if (!vis[v])
		{
			dfs(v);
		}
	}
	stk.push(u);
}

int main()
{
	while (1) {
		int n, m;
		cin >> n >> m;

		if (n + m == 0) break;

		for (int i = 0; i < m; i++)
		{
			int a, b;
			cin >> a >> b;
			gr[a].push_back(b);
		}
		for (int i = 1; i <= n; i++) {
			if (vis[i] == 0) dfs(i);
		}
		int a[n + 1];
		for (int i = 1; i <= n; i++) a[i] = 0;
		while (!stk.empty())
		{
			cout << stk.top() << " ";
			a[stk.top()] = 1;
			stk.pop();
		}
		for (int i = 1; i <= n; i++) {
			if (a[i] == 0) cout << i << " ";
		}
		puts("");

		for (int i = 0; i < n + 1; i++) {
			vis[i] = 0;
			gr[i].clear();
		}

	}

	return 0;
}
