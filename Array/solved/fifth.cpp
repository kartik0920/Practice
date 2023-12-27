// all negative to left  but not of sort the array

#include <iostream>
using namespace std;
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
void rearrange(int *arr, int size)
{
    int negative_count = 0, positive_count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            negative_count++;
        }
        else
        {
            positive_count++;
        }
    }
    int pos_index = negative_count;
    int negative_index = 0;
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            temp[pos_index] = arr[i];
            pos_index++;
        }
        else
        {
            temp[negative_index++] = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}