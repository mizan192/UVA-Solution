//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define br cout<<"\n"
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
#define vsort(q) sort(q.begin(),q.end())
#define lop(i,n) for(i=0;i<n;i++)
#define pi 3.14159265358979323846
#define vpi vector<pair<int,int> >
#define ull unsigned long long int
#define lop1(i,n) for(i=1;i<=n;i++)
#define vsortr(q) sort(q.rbegin(),q.rend())
#define scnf2(a,b) scanf("%d %d",&a,&b)
#define mset(aa) memset(aa, 0, sizeof(aa))
#define scnf2l(a,b) scanf("%lld %lld",&a,&b)
#define debug cout<<"\n---------hi--------\n"
#define see(x) cout<<"\nvalue of "<<#x<<" = "<<x<<"\n"
#define iterate(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define itertaRevers(it, x) for(auto it = x.rbegin(); it != x.rend(); it++)

void smile();

void solve()
{
	int a, b, i, j, k, n, len, ln, cnt = 0, cunt = 0, sum = 0;
	cin >> a;
	cin >> b;
	n = 2;
	if (a % 2 == 0) a = a + 1;
	if (b % 2 == 0) b = b - 1;
	for (i = a; i <= b; i += 2) sum += i;
	cout << sum << endl;









}

int main()
{
	smile();
	int t = 1;
	cin >> t;
	int z = 0;
	while (t--) {
		z++;
		cout << "Case " << z << ": ";
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