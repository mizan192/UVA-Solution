///Bishmillahir Rahmanir Rahim,In the name of Almighty Allah(swt)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define lop1(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pi 3.14159265358979323846
#define smile ios_base::sync_with_stdio(false);	cin.tie(NULL);
//void file();
//void error();

int main()
{
	smile        //file();

	int t;
	cin >> t;
	for (int z = 1; z <= t; z++) {
		int n;
		cin >> n;
		ll ans = 0, a, b, c,rs=0;
		for (int i = 1; i <= n; i++) {
			cin >> a >> b >> c;

			rs = a*c;
			ans += rs;
		}
cout<<ans<<endl;







	} //lop
//  error();
	return 0;
}

/*
void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
}
void error()
{
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}

*/