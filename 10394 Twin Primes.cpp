//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
// #define MAX 10000005
#define MAX 20000000
void smile();
// bool isPrime[MAX];
ll isPrime[MAX];

std::vector<ll> prime;
std::vector<pair<ll, ll> > ans;

void seive() {

	for (ll i = 0; i < MAX; i++) isPrime[i] = 1;

	for (ll i = 2; i * i < MAX; i++) {
		if (isPrime[i] == 1) {
			for (ll j = i * i; j < MAX; j += i) isPrime[j] = 0;
		}
	}

	// prime.pb(2);
	for (ll i = 3; i < MAX; i += 2) {
		if (isPrime[i]) prime.pb(i);
	}

}
void getTwin() {
	ll a, b;
	for (ll i = 0; i < prime.size() - 1; i++) {
		a = prime[i], b = prime[i + 1];
		if (b - a == 2) ans.pb(mp(a, b));
	}
}



int main()
{
	smile();
	seive();
	getTwin();
	ll n;

//	for (int i = 0; i < 10; i++) cout << prime[i] << " ";
	while (cin >> n) {
		ll x, y;
		x = ans[n - 1].first;
		y = ans[n - 1].second;
		cout << "(" << x << ", " << y << ")\n";



		// if (n == 1)
		// 	cout << "(3, 5)\n";
		// else if (n == 2)
		// 	cout << "(5, 7)\n";
		// else {


		// ll a, b, c, x, y;
		// a = (n * 2) - 3;
		// x = prime[a];
		// for (ll i = a; i < prime.size() - 1; i++) {
		// 	b = prime[i], c = prime[i + 1];
		// 	if (c - b == 2) {
		// 		x = b, y = c;
		// 		break;
		// 	}
		// }
		// cout << "(" << x << ", " << y << ")\n";
		// }



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