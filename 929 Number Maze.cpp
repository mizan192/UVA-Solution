//Bismillahir Rahmanir Raheem
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
#define MAX 1001
#define pii pair<int,int>

int dx[] = { -1, +0, +1, +0};
int dy[] = { +0, +1, +0, -1};
int n, m;
int cost[MAX][MAX], dist[MAX][MAX];

void dijkstra(int x, int y) {


	priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

	dist[x][y] = cost[x][y];
	pq.push({cost[x][y], {x, y}});
	while (!pq.empty()) {
		auto it = pq.top();
		pq.pop();
		int cst = it.ff;
		int a = it.ss.ff, b = it.ss.ss;

		//cerr << cst << sp << a << sp << b << nl;

		for (int i = 0; i < 4; i++) {
			int aa = a + dx[i];
			int bb = b + dy[i];
			if (aa <= n && aa >= 1 && bb <= m && bb >= 1) {
				if (dist[aa][bb] > dist[a][b] + cost[aa][bb]) {
					dist[aa][bb] = dist[a][b] + cost[aa][bb];
					if (aa == n && bb == m) break;
					pq.push({dist[a][b] + cost[aa][bb], {aa, bb}});
				}
			}
		}
	}

}


void solve()
{
	int i, j;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cost[i][j] = 0;
			dist[i][j] = INT_MAX;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> cost[i][j];
		}
	}

	dijkstra(1, 1);

	cout << dist[n][m] << nl;


	// for (int i = 1; i <= n; i++) {
	// 	for (int j = 1; j <= m; j++) {
	// 		cout << dist[i][j] << sp;
	// 	}
	// 	br;
	// }


















}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}