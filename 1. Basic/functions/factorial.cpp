#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    if (n == 0)
    {
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cin >> n;

    cout << "The factorial is : " << factorial(n) << endl;
    return 0;
}