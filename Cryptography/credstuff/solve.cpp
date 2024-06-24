#include <bits/stdc++.h>

int main()
{
    std::ifstream passwords;
    passwords.open("passwords.txt");
    std::ifstream usernames;
    usernames.open("usernames.txt");
    std::string username, password;
    int found = 0;
    int c =500;
    while(c--)
    {   
        std::getline(usernames,username);
        if(usernames.eof() )
            break;

        std::cout<<username<<" ";
        std::getline(passwords, password);
            std::cout<<password<<std::endl;
    }
    passwords.close();
    usernames.close();
    return 0;
}