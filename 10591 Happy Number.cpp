//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define br cout<<"\n"
#define ff first
#define ss second
#define MAX 202020
#define mp make_pair
#define pb push_back
#define INMX INT_MAX
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ll long long int
#define ull unsigned long long int
#define scnf(a) scanf("%d",&a)
#define scnfl(a) scanf("%lld",&a)
#define scnf2(a,b) scanf("%d %d",&a,&b)
#define scnf2l(a,b) scanf("%lld %lld",&a,&b)
#define lop(i,n) for(i=0;i<n;i++)
#define lop1(i,n) for(i=1;i<=n;i++)
#define pi 3.14159265358979323846
#define vpl vector<pair<ll,ll> >
#define vpi vector<pair<int,int> >
#define vsort(q) sort(q.begin(),q.end())
#define vsortr(q) sort(q.rbegin(),q.rend())
#define mset(aa) memset(aa, 0, sizeof(aa))
#define debug cout<<"\n---------hi--------"
#define see(x) cout<<"\nvalue of "<<#x<<" = "<<x<<"\n"
void smile();

void solve()
{
	ll i, j, k, n, m, len, ln, cnt = 0, cunt = 0, sum = 0;
	cin >> n;
	m = n;
	int flag = 0;
	std::vector<ll> v;
	v.pb(n);
	while (1) {
		k = n;
		sum = 0;
		while (k != 0) {
			j = k % 10;
			k = k / 10;
			sum += (j * j);
		}
		n = sum;
		if (sum == 1) {
			flag = 1;
			break;
		}
		auto it = find(v.begin(), v.end(), sum);
		if (it != v.end()) {
			flag = 0;
			break;
		}
		else v.pb(sum);

	}


	if (flag) cout << m << " is a Happy number.\n";
	else cout << m << " is an Unhappy number.\n";





}

int main()
{
	smile();
	int t = 1, i = 1;
	cin >> t;
	while (t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
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

