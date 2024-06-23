#include <iostream>
using namespace std;

// Function to implement the Extended Euclidean Algorithm
int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }

    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b % a, a, &x1, &y1);

    // Update x and y using results of recursive call
    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}

// Function to find the modular inverse of A under modulo M
int modInverse(int A, int M)
{
    int x, y;
    int g = gcdExtended(A, M, &x, &y);
    if (g != 1)
        return -1; // Modular inverse doesn't exist
    else
    {
        // m is added to handle negative x
        int res = (x % M + M) % M;
        return res;
    }
}

int main()
{
    int a;
    cout << "picoCTF{";
    while (cin >> a)
    {
        a %= 41;
        if (a == 0)
        {
            cout << '_'; // 0 mod 41 has no inverse, treat as underscore
            continue;
        }

        a = modInverse(a, 41);
        if (a <= 26)
            cout << (char)(a + 'a' - 1); // Convert to 'a' - 'z'
        else if (a <= 36)
            cout << (char)(a - 27 + '0'); // Convert to '0' - '9'
        else
            cout << '_'; // Treat the remaining case as underscore
    }
    cout << "}" << endl;
    return 0;
}
