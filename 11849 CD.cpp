///In the name of Almighty Allah(swt)

#include<bits/stdc++.h>
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)

using namespace std;
int main()
{
    while(1)
    {
        ll n,m;
        cin>>n>>m;
        if(n==0 && m== 0)
            break;
        else
        {
            ll a,i;
            ///vector<int>v;
            set<int>s;   /// set will remove duplicate numerb
            set<int>::iterator it;
            for(i=0; i<n+m; i++)
            {
                cin>>a;
                /// v.push_back(a);
                s.insert(a);
            }
            ll ans,l;
            ans = (n+m);
            l = s.size();
            cout<<ans-l<<endl;

        }
    }
    return 0;
}
