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
#define MAX 500000
std::vector<int> divisors[MAX + 5];
//time-> O(nlogn)
void get_divisors(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j += i) {
			divisors[j].pb(i);
		}
	}
}

// //time -> O(sqrt(n))
// void getDivisor(int n) {

// 	for (int i = 1; i <= n; i++) {

// 		for (int j = i; j * j <= i; j++) {

// 			if (n % j == 0) {

// 				if (n / j == j) {
// 					divisors[i].pb(j);
// 				}
// 				else {
// 					divisors[i].pb(j);
// 					divisors[i].pb(i / j);
// 				}
// 			}
// 		}
// 	}
// }

void solve()
{
	int i, j, k, n, len, ln, cnt = 0, cunt = 0;
	cin >> n >> k;
	if (k == 1) {
		cout << 0 << nl;
		return;
	}
	ll sum = 0;
	for (auto x : divisors[n]) {
		if (x % k != 0) sum += x;
	}

	cout << sum << nl;



	// for (auto x : divisors[20]) cout << x << " ";






}

int main()
{
	smile();
	get_divisors(MAX);
	// getDivisor(MAX);
	int t = 1;
	cin >> t;
	while (t--) {
		solve();

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
