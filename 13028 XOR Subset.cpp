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
//c-9 -> 1:39:25

#define MOD 1000000007

ll mod_expo(ll a, ll b) {    //a^b%MOD
	if (b == 0) return 1LL;
	if (b % 2 == 0) {
		ll expo_half = mod_expo(a, b / 2) % MOD;
		return (expo_half * expo_half) % MOD;
	}
	return (a * mod_expo(a, b - 1)) % MOD;
}

ll big_mod(string &s, int m) {
	ll res = 0;
	for (int i = 0; i < s.size(); i++) {
		res = (res * 10LL + (s[i] - '0')) % m;
	}
	return res;
}


int main()
{
	smile();
	int t;
	cin >> t;
	for (int k = 1; k <= t; k++) {
		string s;
		cin >> s;
		//result = ((3^n+1)/2)%MOD
		ll stringToNum = big_mod(s, MOD - 1);  //pi value of MOD = mod-1 which is cycle length to reduce big num to ll/int
		ll res = mod_expo(3, stringToNum) + 1;
		res = (res * 500000004) % MOD;    //  1/2 er mod value 5000000004
		cout << "Case " << k << ": " << res << nl;
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







