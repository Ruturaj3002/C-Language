#include <iostream>

using namespace std;

int main()

{
    int arr[10];

    int avg, i, sum;

    cout << "enter 10 mumbers: ";

    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];

        sum = sum + arr[i];
    }

    avg = sum / 10;

    cout << "the avg is " << avg;

    return 0;
}

