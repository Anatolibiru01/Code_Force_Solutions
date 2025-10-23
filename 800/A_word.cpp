#include <iostream>
#include <cctype>
using namespace std;

bool numberOfCase(string n)
{
    int u = 0;
    for (char &c : n)
    {
        if (isupper(c))
            u += 1;
    }
    int l = n.length() - u;
    return u > l;
}

int main()
{
    string n;
    cin >> n;

    if (numberOfCase(n))
    {
        for (char &c : n)
        {
            c = toupper(c);
        }
        cout << n;
    }
    else
    {
        for (char &c : n)
        {
            c = tolower(c);
        }
        cout << n;
    }
    return 0;
}