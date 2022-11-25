//Bismillahir Rahmanir Raheem
//uva-13153 Number of connected component with dsu+nubmer theory
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
int pr[MAX + 5];

int find_parent(int u) {
	if (u == pr[u]) return u;
	return pr[u] = find_parent(pr[u]);
}

void union_set(int u, int v) {
	int pu = find_parent(u);
	int pv = find_parent(v);
	pr[pu] = pv;
}
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


void solve()
{

	for (int i = 0; i <= MAX; i++) {
		pr[i] = i;
	}

	int i, j;
	cin >> n;
	vector<int> v;
	for (i = 1; i <= n; i++) {
		int a;
		cin >> a;
		v.pb(a);
		auto factor = primeFactor(a);


		for (auto x : factor) {
			union_set(x, a);
		}


	}

	set<int>st;

	int cnt = 0;

	for (auto x : v) {
		if (x == 1) cnt++;
		else  {
			int root = find_parent(x);
			st.insert(root);
		}
	}

	cnt += st.size();
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