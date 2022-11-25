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
void smile();
#define MAX 102
int n;
char ch[MAX][MAX];
bool vis[MAX][MAX];

int dx[] = { -1, +0, +1, +0};
int dy[] = { +0, +1, +0, -1};

// if (i >= n || j >= n || i < 0 || j < 0)
// 	return;
// if (g[i][j] == '.')  return;
// g[i][j] = '.';
// dfs(i + 1, j);
// dfs(i - 1, j);
// dfs(i, j + 1);
// dfs(i, j - 1);

bool isvalid(int x, int y) {
	if (x < 0 || y < 0 || x >= n || y >= n) return false;
	if (ch[x][y] == '.' || vis[x][y] == 1) return false;
	return true;
}

void dfs(int x, int y) {
	vis[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int a = x + dx[i];
		int b = y + dy[i];
		if (isvalid(a, b)) {
			dfs(a, b);
			ch[a][b] = '.';
		}
	}
}


void solve()
{
	int i, j;
	cin >> n;
	lop(i, n) {
		lop(j, n) cin >> ch[i][j];
	}
	int cunt = 0;
	memset(vis, 0, sizeof(vis));
	lop(i, n) {
		lop(j, n) {
			if (ch[i][j] == 'x') {
				dfs(i, j);
				cunt++;
			}
		}
	}

	cout << cunt << nl;


}

int main()
{
	smile();
	int t = 1;
	cin >> t;
	int test = 1;
	while (t--) {
		cout << "Case " << test << ": ";
		solve();
		test++;
	}


	return 0;
}

void smile() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
