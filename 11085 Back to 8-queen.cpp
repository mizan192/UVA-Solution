#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"

int grid[10][10], given[10][10];
int n = 8;
int minMove = 1000;
int ar[10];

bool isSafe(int row, int col) {
	int i, j;
	for (int i = 1; i < col; i++) {
		if (grid[row][i]) return false;
	}

//check left upper diagonal
	for (i = row, j = col; i >= 1 && j >= 1; i--, j--) {
		if (grid[i][j]) return false;
	}

//check left lower diagonal
	for (i = row, j = col; j >= 1 && i <= n; i++, j--) {
		if (grid[i][j]) return false;
	}

	return true;
}

void nqueen(int col) {
//this is our valid grid compare with given grid
	if (col > n) {
		int move = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (grid[i][j] != given[i][j]) move++;
			}
		}
		minMove = min(minMove, move);

		return;
	}

//check all row for col
	for (int i = 1; i <= n; i++) {
		if (isSafe(i, col)) {
			grid[i][col] = 1;
			nqueen(col + 1);
			grid[i][col] = 0;
		}
	}


}



int main()
{
	int i, j, test = 1;

	while (cin >> ar[1]) {
		for (i = 2; i <= 8; i++)  cin >> ar[i];

		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				given[i][ar[i]] = 1;
			}
		}

		nqueen(1);

		cout << "Case " << test << ": " << minMove / 2 << nl;

		test++;
		minMove = INT_MAX;
		memset(grid, 0, sizeof(grid));
		memset(given, 0, sizeof(given));
	}

	return 0;
}
/*
1 means diagonal
left lower diagonal for n=4

1 0 0 0
1 1 0 0
1 1 1 0
1 1 1 1

left upper diagonal for n=4

0 0 0 0
1 0 0 0
1 1 0 0
1 1 1 0

*/