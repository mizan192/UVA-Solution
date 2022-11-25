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

int f91(int n) {
	if (n >= 101) return n - 10;
	return f91(f91(n + 11));

}


int main()
{
	smile();
	int i, j, n;
	while (1) {
		cin >> n;
		if (n == 0) break;
		cout << "f91(" << n << ") = " << f91(n) << nl;
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







