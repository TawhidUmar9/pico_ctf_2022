/*
at first we remove the empty spaces from the file using
    cat message.txt | tr -d ' ' > clean.txt
then we can use the following code to solve the problem
*/

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string input;
    cin>>input;
    int len = input.length();
    int index = 0;
    while(index + 2<= len)
    {
        char temp = input[index+2];
        input[index+2] = input[index+1];
        input[index+1] = input[index];
        input[index] = temp;
        index+=3;
    }
    cout<<input<<endl;
    return 0;
}