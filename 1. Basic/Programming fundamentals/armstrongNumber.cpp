// Check if the number is armstrong number or not
// Armstrong number is the sum of cube of its number
#include <bits/stdc++.h>
using namespace std;

// Get value of power of a number (2^3=8)
int pow_num(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }

    return pow_num(n, p - 1) * n;
}

// Logic for checking armstrong number

bool is_arm_num(int n)
{

    int temp = n;
    int total = 0;

    while (temp != 0)
    {
        int lst_digit = temp % 10;
        int init_total = pow_num(lst_digit, 3);
        total = total + init_total;
        temp /= 10;
    }
    if (total == n)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    cout << boolalpha << is_arm_num(n) << endl;
    return 0;
}