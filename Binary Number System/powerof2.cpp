#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    if (n > 1)
    {
        if ((n & (n - 1)) == 0)
        {
            cout << "Power of 2.\n";
        }
        else
        {
            cout << "Not a power of 2.\n";
        }
    }
}