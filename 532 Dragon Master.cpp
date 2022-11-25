//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define ff first
#define ss second

int dx[] = { +1, +0, -1, +0, +0, +0};
int dy[] = { +0, +1, +0, -1, +0, +0};
int dz[] = { +0, +0, +0, +0, +1, -1};

char ch[55][55][55];
bool vis[55][55][55];
int cnt = -1;

struct point3D
{
	int z, x, y;
};

bool isValid(point3D check, point3D axis) {
	if (check.x < 0 || check.y < 0 || check.z < 0 || check.x >= axis.x || check.y >= axis.y || check.z >= axis.z)
		return 0;
	else if (vis[check.z][check.x][check.y]) return 0;
	else if (ch[check.z][check.x][check.y] == '#') return 0;
	else return 1;
}

void bfs3d(point3D axis, point3D startP) {
	queue<pair<point3D, int>>q;

	q.push({startP, 0});
	vis[startP.z][startP.x][startP.y] = 1;

	while (!q.empty()) {
		auto temp = q.front();
		// pair<point3D, int> temp = q.front();
		q.pop();

		for (int i = 0; i < 6; i++) {
			int xx = temp.ff.x;
			int yy = temp.ff.y;
			int zz = temp.ff.z;
			point3D newAxis;
			newAxis.x = xx + dx[i];
			newAxis.y = yy + dy[i];
			newAxis.z = zz + dz[i];

			if (isValid(newAxis, axis)) {
				vis[newAxis.z][newAxis.x][newAxis.y] = 1;
				if (ch[newAxis.z][newAxis.x][newAxis.y] == 'E') {
					cnt = temp.ss + 1;
					return;
				}
				q.push({newAxis, temp.ss + 1});
				//cerr << newAxis.z << sp << newAxis.x << sp << newAxis.y << nl;
			}
		}



	}

}


void solve()
{
	int i, j;

	while (1) {
		cnt = -1;
		point3D axis, startP;
		cin >> axis.z >> axis.x >> axis.y;
		if (axis.x == 0 && axis.y == 0 && axis.z == 0) break;

		for (int k = 0; k < axis.z; k++) {
			for (int i = 0; i < axis.x; i++) {
				for (int j = 0; j < axis.y; j++) {
					vis[k][i][j] = 0;
					cin >> ch[k][i][j];

					if (ch[k][i][j] == 'S') {
						startP.z = k;
						startP.x = i;
						startP.y = j;
					}

				}
			}
		}

		bfs3d(axis, startP);

		if (cnt == -1) cout << "Trapped!" << nl;
		else cout << "Escaped in " << cnt << " minute(s)." << nl;

	}



}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}