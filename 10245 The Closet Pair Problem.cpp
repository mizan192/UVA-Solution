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
#define lop(i,n) for(i=0;i<n;i++)
#define chk cout<<"\n------aci-----"
#define vsort(q) sort(q.begin(),q.end())
#define vsortr(q) sort(q.rbegin(),q.rend())
#define see(a) cerr << #a << "=" << a << "\n"
#define see2(a, b) cerr << #a << "=" << a << "   " << #b << "=" << b << "\n"
void vshow(vector<ll> v) { for (auto x : v) cout << x << " "; }
void vpshow(vector<pair<int, int>> v) { for (auto x : v) cout << x.first << " " << x.second << "\n"; }
void mshow(map<int, int> m) { for (auto x : m) cout << x.first << " " << x.second << "\n"; }
#define MAX 100000
// #define MAX 105

set<ll>st;
std::vector<ll>sq;
ll len, limit;
bool vis[MAX];
std::map<ll, ll> m;

void solve()
{
	while (1) {
		int i, j, n;
		cin >> n;
		if (n == 0) break;

		std::vector<pair<double, double>>v, u;
		lop(i, n) {
			double a, b;
			cin >> a >> b;
			v.pb(mp(a, b));

		}



		double ans = 10000.0 * 10000.0;
		for (i = 0; i < v.size() - 1; i++) {
			for (j = i + 1; j < v.size(); j++) {
				double x1 = v[i].ff, y1 = v[i].ss;
				double x2 = v[j].ff, y2 = v[j].ss;
				double x = (x1 - x2);
				x = x * x;
				double y = (y1 - y2);
				y = y * y;
				double dist = x + y;
				if (dist < ans) ans = dist;
			}



		}




		ans = sqrt(ans);



		if (ans == 10000.0)
			printf("INFINITY\n");
		else
			printf("%0.4lf\n", ans);




	}

}

int main()
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	int t = 1;

//	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}