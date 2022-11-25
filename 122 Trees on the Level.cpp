// https://ideone.com/TY1Cd4
// Bismillahir Rahmanir Raheem
// https://onlinejudge.org/external/1/122.pdf
#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define ll long long int
#define MAX 100000

std::map<string, int> m;
int tree[MAX];
int nodeVis = 0;

// left childpos  = parentIndex*2
// right childpos = parentIndex*2+1

void dfs(string s, int pos)
{
	if (m[s] == 0)
		return;
	nodeVis++;
	int childPos = pos * 2;
	if (s[s.size() - 1] == 'R')
		childPos++;
	int value = m[s];
	tree[childPos] = value;
	string s1 = s + "L";
	string s2 = s + "R";

	dfs(s1, childPos);
	dfs(s2, childPos);
}

void solve()
{
	while (1)
	{

		std::vector<pair<int, string>> v;
		m.clear();
		nodeVis = 0;
		for (int i = 0; i < MAX; i++)
			tree[i] = -1;

		while (1)
		{
			string s;
			cin >> s;
			if (s.size() == 0)
				break;
			if (s == "()")
				break;
			int len = 0;
			for (int i = s.size() - 2; i >= 0; i--)
			{
				if (s[i] == ',')
					break;
				len++;
			}
			v.pb(mp(len, s));
		}
		if (v.size() == 0)
			return;
		sort(v.begin(), v.end());

		int n = v.size(), pos = 1, ok = 0;

		for (auto x : v)
		{
			string s = x.ss, s1 = "", s2 = "";
			for (int i = 1; i < s.size(); i++)
			{
				if (s[i] == ',')
					break;
				s1 += s[i];
			}
			for (int i = s.size() - 2; i >= 0; i--)
			{
				if (s[i] == ',')
					break;
				s2 += s[i];
			}
			int value = stoi(s1);
			reverse(s2.begin(), s2.end());
			m[s2] = value;
			if (x.ff == 0)
			{
				tree[1] = value;
				ok = 1;
			}
		}

		dfs("R", 1);
		dfs("L", 1);

		if (!ok || nodeVis != v.size() - 1)
			cout << "not complete" << nl;
		else
		{
			// here pow(2,maxLevel);
			cout << tree[1];
			for (int i = 2; i < MAX; i++)
				if (tree[i] != -1)
					cout << " " << tree[i];
			cout << nl;
		}

		// for (auto x : m) cout << x.ff << sp << x.ss << nl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	// cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}