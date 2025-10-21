#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int n = 0;
    while (m--)
    {
        string sympol;
        cin >> sympol;
        if (sympol == "X++")
            n++;
        else if (sympol == "++X")
            ++n;
        else if (sympol == "--X")
            --n;
        else if (sympol == "X--")
            n--;
    }
    cout << n;
    return 0;
}