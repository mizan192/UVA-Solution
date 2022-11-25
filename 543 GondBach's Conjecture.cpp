//Bishmillahir Rahmanir Rahim,In the name of Almighty Allah(swt)
//prime num check with O(nlogn) complexity
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int isPrime[1000001];

void seive() {

	int maxN = 1000000;
	for (int i = 1; i <= maxN; i++) isPrime[i] = 1;
	isPrime[0] = isPrime[1] = 0;

	for (int i = 2; i * i <= maxN; i++) {

		if (isPrime[i]) {
			//from i*i to next maxN will not prime of ith divisble
			for (int j = i * i; j <= maxN; j += i)
				isPrime[j] = 0;
		}

	}

}


int main()
{
	int n;
	//cin >> n;
	seive();
	while (1) {
		cin >> n;
		if (n == 0) break;
		int falg = 0;
		int l = 3, r = n - 3;
		while (1) {
			if (r < l) {
				falg = 1;
				break;
			}
			if (isPrime[l] == 1 && isPrime[r] == 1) {
				cout << n << " = " << l << " + " << r << endl;
				break;
			}
			else {
				l++;
				r--;
			}

		}
		if (falg) cout << "Goldbach's conjecture is wrong.\n";

	}
	return 0;
}

