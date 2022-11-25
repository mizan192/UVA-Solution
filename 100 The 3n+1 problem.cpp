#include<bits/stdc++.h>
using namespace std;
int cycle(int x);
int main()
{
    int a,b,i,j;
    int m,n,temp;
    int length,mx_length;
    while(cin>>a>>b )
    {
        m = a;
        n =b;
        if(m>n)
        {
            temp = a;
            a = n;
            b = temp;
        }
        mx_length = 1;
        for(i=a; i<=b; i++)
        {
            length = cycle(i);
            if(length > mx_length)
                mx_length = length;

        }


        printf("%d %d %d\n",m,n,mx_length);
    }

    return 0;
}

int cycle(int x)
{
    int cunt=1;
    while(x != 1)
    {
        if(x%2 ==0)
            x = x/2;
        else
            x = 3*x+1;

        cunt++;
    }
    return cunt;
}

