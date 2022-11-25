#include<iostream>
using namespace std;
int main()
{
    string s;
   while(getline(cin,s)) {
      int p,q,i,cunt=0,word=0;
    p = s.length();
    for(i=0; i<p; i++)
    {
        if((s[i]>= 'a' && s[i]<= 'z') || (s[i]>= 'A' && s[i]<= 'Z' ))
            cunt = 1;
        else
        {
            word = word + cunt;
            cunt = 0;
        }

    }
    word = word + cunt;
    cout<<word<<endl;

   }
return 0;
}


