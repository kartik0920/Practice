// make the array reverse
#include <iostream>
using namespace std;
void reverse(int *arr, int size)
{
    int s = 0, e = size - 1;
    while (e >= s)
    {
        swap(arr[e], arr[s]);
        e--;
        s++;
    }
}
void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "array b4 reverse:";
    print(arr, size);
    reverse(arr, size);
    cout << "Array after reverse:";
    print(arr, size);
    return 0;
}