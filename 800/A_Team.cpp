#include <iostream>
using namespace std;

int main()
{
    int n;
    int num = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum >= 2)
        {
            num += 1;
        }
    }
    cout << num << endl;
    return 0;
}