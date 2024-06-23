#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream username("usernames.txt");
    while(true)
    {
        string user;
        getline(username, user);
        cout << user << endl;
        if(username.eof())
        {
            break;
        }
    }
}