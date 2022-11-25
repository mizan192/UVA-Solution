//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
void smile();

void solve()
{
	int i, j, k, n;
	string s;
	// cin >> s;
	getline(cin, s);    //to collect empty string
	if (s.length() == 0) {
		cout << "Yes\n";
		return;
	}
	stack<char>c;
	for (int i = 0; i < s.length(); i++) {
		if (!c.empty() && s[i] == ')' && c.top() == '(') c.pop();
		else if (!c.empty() && s[i] == ']' && c.top() == '[') c.pop();
		else c.push(s[i]);
	}

	if (c.empty()) cout << "Yes\n";
	else cout << "No\n";




}

int main()
{
	smile();
	int t = 1;
	cin >> t;
	cin.ignore();
	while (t--) {
		solve();

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




///In the name of Almighty Allah(swt)

#include<bits/stdc++.h>
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)

using namespace std;
int main()
{
    ll n,i,t,j,l;
    string s;
    cin>>t;
    getchar();   /// if we don't use it
                /// then t will accept as char value & print result
    while(t--)
    {
        getline(cin,s);
        l = s.length();
        stack<char>c;
        if(l%2 !=0)
            cout<<"No"<<endl;
        else
        {
            for(i=0; i<l; i++)
            {
                if(s[i]=='(' || s[i]== '[')
                    c.push(s[i]);

                else if(!c.empty() && s[i]==')' && c.top()=='(')
                    c.pop();

                else if( !c.empty() && s[i]==']' && c.top()=='['   )
                    c.pop();
                else
                    c.push(s[i]);
            }

            if(c.empty())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;


        }

    }


    return 0;
}
