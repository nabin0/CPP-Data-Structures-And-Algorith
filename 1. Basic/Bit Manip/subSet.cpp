#include <iostream>
using namespace std;

void subset(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int arr[5] = {1, 4, 6, 3, 2};
    int n = 5;
    subset(arr, n);
    return 0;
}