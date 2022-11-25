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
#define debug cout<<"---------hi--------"
#define see(x) cerr<<"value of "<<#x<<" = "<<x<<"\n"
template<class T> void vsee(vector<T>&v) {cerr << "vec : [ "; for (T i : v) cerr << i << " "; cerr << "]";}
template <class T, class V> void msee(map <T, V> v) {for (auto i : v) cerr << i.first << " -> " << i.second << "\n"; }
template <class T, class V> void vpsee(vector<pair<T, V>> v) {for (auto i : v) cerr << i.first << " -> " << i.second << "\n"; }
void smile();
#define MAX 32000
bool isPrime[MAX + 5];
std::vector<int>primes, divisors[MAX + 5];
// std::map<int, pair<int, int> > m;
std::map<int, std::vector<int> > m;
std::vector<pair<int, int> > v;
void seive(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (isPrime[i] == 0) {
			for (int j = i * i; j <= n; j += i) isPrime[j] = 1;
		}
	}
	// primes.pb(2);
	for (int i = 3; i <= n; i += 2) {
		if (isPrime[i] == 0) primes.pb(i);
	}
}
void determinate_primes() {
	for (int k = 2; k <= 25; k++) {
		int cnt = 0, start = 0;
		for (int i = 0; i < primes.size() - 1; i++) {
			if (cnt == 0) start = i;
			if (primes[i + 1] - primes[i] == k) {
				cnt++;
				if (i == primes.size() - 2 && cnt >= 2) {
					m[k].pb(start);
					m[k].pb(i + 1);
				}
			}
			else {
				if (cnt >= 2) {
					m[k].pb(start);
					m[k].pb(i);
				}
				cnt = 0;
			}
		}
	}

	for (auto x : m) {
		int flag = 0;
		for (int i = 0; i < x.ss.size() - 1; i += 2) {
			int a = x.ss[i], b = x.ss[i + 1];
			v.pb(mp(a, b));
		}
	}
	vsort(v);
}


int main()
{
	smile();
	seive(MAX);
	determinate_primes();
	int t = 1;
	// cin >> t;
	while (1) {
		int l, r;
		cin >> l >> r;
		int a = l, b = r;
		l = min(a, b), r = max(a, b);
		if (l == 0 && r == 0) break;
		for (auto x : v) {
			int a = x.ff, b = x.ss;
			if (primes[a] >= l && primes[b] <= r) {
				for (int i = a; i <= b; i++) {
					cout << primes[i];
					if (i != b) cout << sp;
				}
				cout << nl;
			}
		}
	}

	// for (auto x : v) cout << x.ff << sp << x.ss << nl;


	return 0;
}

void smile() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
