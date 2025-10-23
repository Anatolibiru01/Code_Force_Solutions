#include <iostream>
#include <set>

using namespace std;

int main()
{
    string userName;
    cin >> userName;

    set<char> unique_chars(userName.begin(), userName.end());
    string result(unique_chars.begin(), unique_chars.end());

    int length = result.length();

    if (length % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}