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
#define vsortr(q) sort(q.rbegin(),q.rend())
void smile();

int main()
{
	smile();
	int i, j, n;
	int a, b;
	while (cin >> a >> b) {
		// int a, b;
		int ok = 0;
		// cin >> a >> b;
		if (__gcd(a, b) == 1) ok = 1;
		else ok = 0;
		printf("%10d%10d", a, b);
		if (ok) printf("    Good Choice\n\n");
		else    printf("    Bad Choice\n\n");
	}






	return 0;
}


void smile() {
	// ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}







