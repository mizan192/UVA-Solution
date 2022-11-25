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
void smile();
#define MAX 1000
#define MX 1000000

bool isPrime[MAX + 5];
vector<int> primes;
std::vector<ll> factor(MX + 5);

void seive(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (isPrime[i] == 0) {
			for (int j = i * i; j <= n; j += i) {
				isPrime[j] = 1;
			}
		}
	}
	primes.pb(2);
	for (int i = 3; i <= n; i += 2) {
		if (isPrime[i] == 0) primes.pb(i);
	}
}

void primeFactor() {
	factor[2] = 1;
	for (int k = 3; k <= 1000000; k++) {
		int factorCunt = 0, n = k;
		for (int i = 0; i < primes.size() && primes[i]*primes[i] <= n; i++) {
			if (n % primes[i] == 0) {
				while (n % primes[i] == 0) {
					n /= primes[i];
					factorCunt++;
				}
			}
		}
		if (n > 1) factorCunt++;
		factor[k] = factor[k - 1] + factorCunt;
	}
}

int main()
{
	smile();
	int t = 1;
	seive(MAX);
	primeFactor();

	int n;

	while (scanf("%d", &n) != EOF) {
		cout << factor[n] << nl;
	}

	// while (1) {
	// 	int n;
	// 	cin >> n;
	// 	cout << factor[n] << nl;
	// }

	// cout << factor[2] << nl;
	// cout << factor[5] << nl;
	// cout << factor[8] << nl;





	return 0;
}

void smile() {
	// ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
