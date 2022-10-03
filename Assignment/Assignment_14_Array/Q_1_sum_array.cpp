#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int i, sum = 0;

    cout << "enter 10 number";

    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];

        sum = sum + arr[i];
    }

    cout << "the sum is:" << sum;

    return 0;
}