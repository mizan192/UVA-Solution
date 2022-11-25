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
bool vis2D[102][102];
int row, column;
char ch[102][102];
int dx[] = { -1, 1, 0, 0, -1, 1, -1, 1};
int dy[] = {0, 0, -1, 1, -1, 1, 1, -1};

bool is_valid(int x, int y) {
	if (x < 0 || x >= row || y < 0 || y >= column) return false;
	if (vis2D[x][y] == 1 || ch[x][y] == '*') return false; //already visited
	else return true;
}

void dfs(int x, int y) {
	vis2D[x][y] = 1;
	for (int i = 0; i < 8; i++) {
		int a = x + dx[i];
		int b = y + dy[i];
		if (is_valid(a, b) == true)
			dfs(a, b);
	}
}


int main()
{
	smile();

	while (1) {
		for (int i = 0; i < 102; i++) {
			for (int j = 0; j < 102; j++) vis2D[i][j] = 0;
		}
		int i, j;
		cin >> row >> column;
		if (row == 0) break;

		int x, y;
		int oil = 0;
		lop(i, row) {
			lop(j, column) {
				cin >> ch[i][j];
				if (ch[i][j] == '@') {
					oil++;
				}
			}
		}
		if (oil == 0) cout << 0 << nl;

		else {
			int cunt = 0;
			lop(i, row) {
				lop(j, column) {
					if (vis2D[i][j] == 0 && ch[i][j] == '@') {
						dfs(i, j);
						cunt++;
					}
				}
			}
			cout << cunt << nl;
		}

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


