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

bool isSqrt(int n) {
	int a;
	a = sqrt(n);
	if (a * a == n) return true;
	else return false;
}

int main()
{
	smile();
	int a, b;
	while (cin >> a >> b && a != 0 && b != 0) {
		int cunt = 0, prv = 0, j = 0;
		for (int i = a; i <= b; i++) {
			if (isSqrt(i)) {
				cunt++;
				// j = i;
				// i = i + prv;
				// prv = j;
			}
		}

		cout << cunt << endl;

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