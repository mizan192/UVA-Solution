#include<iostream>
using namespace std;
int main()
{
    int k =1;
    while(1)
    {
        int n;
        cin>>n;
        int a[n],s,i,j,m,av=0,sum=0;
        if(n == 0)
            break;
        else
        {
            for(i=0; i<n; i++)
            {
                cin>>a[i];
                av += a[i];
            }
            m = av/n;
            for(i=0;  i<n; i++)

            {
                if(a[i] > m)
                {
                    s = a[i]-m;
                    sum += s;
                }
            }

            cout<<"Set #"<<k<<endl;
            cout<<"The minimum number of moves is "<<sum<<"."<<endl<<endl;

            k++;
            }


    }

    return 0;
}

