// rotate the array by position
#include <iostream>
using namespace std;
void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void rotate(int *arr, int size)
{

    int temp[size];
    for (int i = 0; i < size - 1; i++)
    {
        temp[i + 1] = arr[i];
    }
    temp[0] = arr[size - 1];
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "B4 rotate:";
    print(arr, n);
    cout << "After rotate:";
    rotate(arr, n);
    print(arr, n);

    return 0;
}