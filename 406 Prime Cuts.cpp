//Bishmillahir Rahmanir Rahim,In the name of Almighty Allah(swt)
//prime num check with O(nlogn) complexity
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maX 1010
bool prime[maX];
std::vector<int> p;
void seive() {
	prime[0] = prime[1] = true;
	p.push_back(1);
	for (int i = 2; i < maX; i++) {
		if (prime[i] == false) {
			p.push_back(i);
			for (int j = i * i; j < maX; j += i)
				prime[j] = true;
		}
	}



}


int main()
{
	

	//cin >> n;
	seive();
	int n, x;

	while (scanf("%d %d", &n, &x) != EOF ) {
		printf("%d %d:", n, x);
		std::vector<int> v;
		for (int i = 0; i < p.size(); i++) {
			if (p[i] <= n) v.push_back(p[i]);
			else break;
		}

		int ln =v.size();
		//cout << n << " " << x << ":";
		int c;
		c = x*2;
		if(ln%2==1) c=c-1;
		int a,b;
		a = floor(c/2.0);
		b = ceil(c/2.0);
		int mx,mn,l,r;
		l = (int) ln/2 -a;
		r = (int) ln/2 +b;
		mx = max(0,l);
		mn = min(ln,r);
		for(int i=mx; i<mn; i++)
			printf(" %d",v[i]);

		printf("\n\n");




	}

	return 0;
}