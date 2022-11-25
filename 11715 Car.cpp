//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define br cout<<"\n"
#define nl "\n"
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
#define ull unsigned long long int
#define lop1(i,n) for(i=1;i<=n;i++)
#define vsortr(q) sort(q.rbegin(),q.rend())
#define scnf2(a,b) scanf("%d %d",&a,&b)
#define scnf2l(a,b) scanf("%lld %lld",&a,&b)
#define debug cout<<"\n---------hi--------\n"
#define see(x) cout<<"\nvalue of "<<#x<<" = "<<x<<"\n"
void smile();

int main()
{
	smile();
	int cse = 1, position;
	while (cin >> position && position != 0) {
		double u, v, t, s, a, ans, sm, u2, v2;
		cout << "Case " << cse++ << ": ";
		switch (position) {
		case 1: cin >> u >> v >> t;
			a = (v - u) / t;
			s = (u * t) + (0.5 * a * t * t);
			cout << fixed << setprecision(3) << s << " " << a << nl;
			break;

		case 2: cin >> u >> v >> a;
			t = (v - u) / a;
			s = (u * t) + (0.5 * a * t * t);
			cout << fixed << setprecision(3) << s << " " << t << nl;
			break;
		case 3: cin >> u >> a >> s;
			u2 = u * u;
			sm = (2 * a * s);
			v = sqrt(u2 + sm);
			t = (v - u) / a;
			cout << fixed << setprecision(3) << v << " " << t << nl;
			break;

		case 4: cin >> v >> a >> s;
			v2 = v * v, sm = (2 * a * s);
			u = sqrt(v2 - sm);
			t = (v - u) / a;
			cout << fixed << setprecision(3) << u << " " << t << nl;
			break;

		}
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