//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define br cout<<"\n"
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define vsort(q) sort(q.begin(),q.end())
#define vsortr(q) sort(q.rbegin(),q.rend())
void smile();

//uva 459 : graph connectivity

bool vis[1000];
std::vector<int> graph[1000];
int pre[1000];
void add(int u, int v) {
	graph[u].pb(v);
	graph[v].pb(u);
}
void dfs(int n) {

	if (vis[n] == 0) {

		vis[n] = 1;
		for (int child : graph[n]) {
			if (!vis[child]) dfs(child);
		}

	}

}

int main()
{
	smile();
	int n, m, t, i, j, u, v;
	char c[2], s[5];
	scanf("%d\n", &t);
	while (t--) {
		gets(c);
		//cin >> c;
		// getchar();
		n = c[0] - 64;
		// getline(cin, s);

		while (gets(s)) {
			if (s[0] == '\0') break;

			u = s[0] - 65;
			v = s[1] - 65;

			add(u, v);
		}
		int cunt = 0;

		for (int i = 0; i < n; i++) {
			if (!vis[i]) {
				dfs(i);
				cunt++;
			}
		}


		cout << cunt << nl;
		if (t != 0) cout << nl;

		memset(vis, 0, sizeof(vis));
		memset(graph, 0, sizeof(graph));



	}




	return 0;
}


void smile() {
	// ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}







