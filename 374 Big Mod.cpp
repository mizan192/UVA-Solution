///In the name of Almighty Allah(swt)

#include<bits/stdc++.h>
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
void fast();
void file();
void error();
int getMod(int x, int y, int z);
using namespace std;
int main()
{
	fast();
	file();

	int b, p, m;
	while (cin >> b >> p >> m)
	{
		int ans = getMod(b, p, m);
		cout << ans << endl;
	}
 

	error();
	return 0;
}
 /// modulus rule :  (a.b) mod c = ((a mod c).(b mod c)) mod c

int getMod(int x, int y, int z)
{
	if(y == 0)
		return 1;
	if ( y%2 ==0)
	{
		int p = getMod(x, y/2, z);      /// reduce p for simplication
		return (p*p)%z;
	}
	else 
		return ( x%z * getMod(x,y-1,z) )%z;    /// y is odd so y-1
}

void fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
}
void error()
{
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}