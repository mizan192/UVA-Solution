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
void smile();

// int mod_expo(int a, int b,int mod) {
// 	if (b == 0) return 1;
// 	if (b % 2 == 0) {
// 		int expo_half = mod_expo(a, b / 2);
// 		return (expo_half * expo_half) % mod;
// 	}
// 	return (a * mod_expo(a, b - 1)) % mod;
// }

ll big_mod(int b, int p, int mod) {
	if (p == 0) return 1;
	if (p % 2 == 0) {
		ll half_expo = big_mod(b, p / 2, mod);
		return (half_expo * half_expo) % mod;
	}
	return (b * big_mod(b, p - 1, mod)) % mod;
}


int main()
{
	smile();
	int i, j, b, p, m;
	while (cin >> b >> p >> m) {
		cout << big_mod(b, p, m) << nl;
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







