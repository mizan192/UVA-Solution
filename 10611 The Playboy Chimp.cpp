//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define br "\n"
#define ff first
#define ss second
#define MAX 202020
#define mp make_pair
#define pb push_back
#define INMX INT_MAX
#define no cout<<"NO\n"
#define ll long long int
#define yes cout<<"YES\n"
#define scnf(a) scanf("%d",&a)
#define vpl vector<pair<ll,ll> >
#define scnfl(a) scanf("%lld",&a)
#define vsort(q) sort(q.begin(),q.end());
#define lop(i,n) for(i=0;i<n;i++)
#define pi 3.14159265358979323846
#define vpi vector<pair<int,int> >
#define ull unsigned long long int
#define lop1(i,n) for(i=1;i<=n;i++)
#define vsortr(q) sort(q.rbegin(),q.rend())
#define scnf2(a,b) scanf("%d %d",&a,&b)
#define mset(aa) memset(aa, 0, sizeof(aa))
#define scnf2l(a,b) scanf("%lld %lld",&a,&b);
#define debug cout<<"\n---------hi--------\n";
#define see(x) cout<<"\nvalue of "<<#x<<" = "<<x<<"\n";
#define iterate(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define itertaRevers(it, x) for(auto it = x.rbegin(); it != x.rend(); it++)

void smile();


void solve()
{
	int i, a, q, x, j, k, n, len, y, ln, cnt = 0, cunt = 0;
	cin >> n;

	std::vector<int>v;
	lop(i, n) {
		cin >> y;
		v.pb(y);
	}
	sort(v.begin(), v.end());
	cin >> q;
	int left, right;
	while (q--) {

		cin >> x;

		auto it = lower_bound(v.begin(), v.end(), x);
		left = it - v.begin();
		//left = v[left];

		it = upper_bound(v.begin(), v.end(), x);
		right = it - v.begin();
		//right = v[right];

		// //if (left == right) cout << left << " X" << endl;
		// //else cout << left << " " << right << endl;
		// cout << left << " " << right << endl;

		if (left == 0) cout << "X" << " ";
		else cout << v[left - 1] << " ";

		if (right == n) cout << "X" << endl;
		else cout << v[right] << endl;



	}








}

int main()
{
	smile();
	int t = 1;
	//cin >> t;
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