#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
int cunt=0;

    while(1 )
    {

        cin>>s;
        cunt++;
        if( s=="HELLO" )
            cout<<"Case "<<cunt<<": ENGLISH"<<endl;
        else if(s=="HOLA")
            cout<<"Case "<<cunt<<": SPANISH"<<endl;
        else if(s=="HALLO")
            cout<<"Case "<<cunt<<": GERMAN"<<endl;
        else if(s=="BONJOUR")
            cout<<"Case "<<cunt<<": FRENCH"<<endl;
        else if(s=="CIAO")
            cout<<"Case "<<cunt<<": ITALIAN"<<endl;
        else if(s=="ZDRAVSTVUJTE")
            cout<<"Case "<<cunt<<": RUSSIAN"<<endl;
        else if(s== "#")
            break;
        else
            cout<<"Case "<<cunt<<": UNKNOWN"<<endl;

    }




    return 0;
}

