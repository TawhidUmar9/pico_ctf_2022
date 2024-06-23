#include <iostream>
using namespace std;


int main()
{
    int a;
    cout<<"picoCTF{";
    while(cin>>a)
    {   a%=37;
        if(a<=25)
            cout<<(char)(a +'A');
        else if(a<=35)
            cout<<a - 26;
        else
            cout<<'_';
    }
    cout<<"}"<<endl;
}