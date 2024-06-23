#include <bits/stdc++.h>

int main()
{
    std::ifstream passwords;
    passwords.open("passwords.txt");
    std::ifstream usernames;
    usernames.open("usernames.txt");
    std::string username, password;
    int found = 0;
    while(true)
    {   
        std::getline(usernames,username);
        if(usernames.eof() )
            break;
        
        if(username == "cultiris")
        {
            std::cout<<"cultiris"<<std::endl;
            found = 1;            
        }
        
        std::getline(passwords, password);
        if(found == 1)
        {
            std::cout<<password<<std::endl;
        }
    }
    passwords.close();
    usernames.close();
    return 0;
}