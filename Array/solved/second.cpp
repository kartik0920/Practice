#include <iostream>
using namespace std;
void getMaxMin(int *arr, int size)
{
    int min = arr[0], max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "max:" << max << endl;
    cout << "min:" << min << endl;
}
int main()
{
    int arr[] = {1, 2, 3, -4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "max and min in given array is ";
    getMaxMin(arr, size);
    return 0;
}