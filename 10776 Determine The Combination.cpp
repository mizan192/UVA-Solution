//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
void smile();

string s, newS;
int n;
bool vis[50];
vector<string> v;

void generate_combination(int start) {
	if (newS.size() == n) {
		v.push_back(newS);
		// cout << newS << endl;
		return;
	}
	for (int i = start; i < s.size(); i++) {
		if (!vis[i]) {
			vis[i] = 1;
			newS.push_back(s[i]);
			generate_combination(i + 1);
			vis[i] = 0;
			newS.pop_back();
		}
		while (i + 1 < s.size() && s[i] == s[i + 1]) i++;

	}


}


int main()
{
	smile();
	int t = 1;
	// cin >> t;
	while (cin >> s >> n) {
		newS = "";
		v.clear();
		memset(vis, 0, sizeof(vis));
		sort(s.begin(), s.end());
		generate_combination(0);
		sort(v.begin(), v.end());
		for (auto x : v) cout << x << endl;
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