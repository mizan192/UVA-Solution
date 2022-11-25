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
#define MAX 1000005
int n;
bool vis[MAX + 5], isPrime[MAX + 5];
vector<int>gr[MAX + 5];
vector<int>primes;

void seive() {
	for (int i = 2; i * i <= MAX; i++) {
		if (isPrime[i] == 0) {
			for (int j = i * i; j <= MAX; j += i) isPrime[j] = 1;
		}
	}
	for (int i = 2; i <= MAX; i++) {
		if (!isPrime[i]) primes.pb(i);
	}
}

vector<int> primeFactor(int n) {
	vector<int>pFactor;
	for (int i = 0; i < primes.size() && primes[i]*primes[i] <= n; i++) {
		if (n % primes[i] == 0) {
			pFactor.pb(primes[i]);
			while (n % primes[i] == 0) {
				n /= primes[i];
			}
		}
	}
	if (n > 1) pFactor.pb(n);
	return pFactor;
}

void dfs(int node) {
	vis[node] = 1;
	for (auto child : gr[node]) {
		if (!vis[child]) dfs(child);
	}
}

void solve()
{

	for (int i = 0; i <= MAX; i++) {
		vis[i] = 0;
		gr[i].clear();
	}

	int i, j;
	cin >> n;
	vector<int> v;
	for (i = 1; i <= n; i++) {
		int a;
		cin >> a;
		v.pb(a);
		auto factor = primeFactor(a);

		//cout << a << " -> ";

		for (auto x : factor) {
			//cout << x << sp;
			gr[x].pb(a);
			gr[a].pb(x);
		}

		// cout << nl;
	}



	int cnt = 0;

	for (auto x : v) {
		if (x == 1) cnt++;
		else if (!vis[x]) {
			dfs(x);
			cnt++;
		}
	}

	cout << cnt << nl;


}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	seive();

	int t = 1;
	cin >> t;
	for (int test = 1; test <= t; test++) {
		cout << "Case " << test << ": ";
		solve();
	}

	return 0;
}