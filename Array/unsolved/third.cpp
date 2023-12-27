// find Kth index of array
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
int Kthmin(int *arr, int size, int k)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;

    if (mid >= k)
    {
        int count = 1;
        for (int i = 0; i < size; i++)
        {
            int min_index = i;
            for (int j = i + 1; j < size; j++)
            {
                if (arr[min_index] > arr[j])
                {
                    min_index = j;
                }
            }
            swap(arr[min_index], arr[i]);
            if (count == k)
            {
                return arr[i];
            }
            count++;
        }
    }
    else
    {
        int count = 1;
        for (int i = 0; i < size; i++)
        {
            int max_index = i;
            for (int j = i + 1; j < size; j++)
            {
                if (arr[max_index] < arr[j])
                {
                    max_index = j;
                }
            }
            swap(arr[max_index], arr[i]);
            if ((size - count + 1) == k)
            {
                return arr[i];
            }
            count++;
        }
    }
}
int main()
{
    int arr[] = {321, 4, 34, 1, 5, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Enter k:";
    cin >> k;
    cout << Kthmin(arr, size, k);
    // print(arr, size);
    return 0;
}