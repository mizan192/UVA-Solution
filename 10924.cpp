///In the name of Almighty Allah(swt)

#include<bits/stdc++.h>
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
using namespace std;
int main()
{


	char ch[21];
	while (scanf("%s", ch) == 1) {

		int  num, sum = 0, l = strlen(ch);

		for (int i = 0; i < l; i++)
		{

			if ( ch[i] >= 'a' && ch[i] <= 'z'  )
				sum += ch[i] - 96;
			else
				sum += ch[i] - 38;
		}

		int cunt=0;
		for(int j=2; j<sum; j++)
		{
			if(sum % j ==0)
				cunt++;
		}
		if(cunt ==0)
			cout<<"It is a prime word."<<endl;
		else 
			cout<<"It is not a prime word."<<endl;

	}

	return 0;
}


