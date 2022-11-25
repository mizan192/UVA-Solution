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

int main()
{
	// smile();
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		ll a, b, c, j;
		cin >> a >> b >> c;
		cout << "Case " << i << ": ";
		set<ll>s;
		s.insert(a);
		s.insert(b);
		s.insert(c);
		if (a + b <= c || b + c <= a || c + a <= b) cout << "Invalid\n";
		else if (s.size() == 1) cout << "Equilateral\n";
		else if (s.size() == 2) cout << "Isosceles\n";
		else cout << "Scalene\n";





//it also ac
		// if (a + b <= c || b + c <= a || c + a <= b) cout << "Invalid\n";
		// else if (a == b && b == c) cout << "Equilateral\n";
		// else if (a == b || a == c || b == c) cout << "Isosceles\n";
		// else cout << "Scalene\n";



	}



	return 0;
}


