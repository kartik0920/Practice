// merge two array
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

void merge(int *arr1, int m, int *arr2, int n, int *arr3)
{

    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < m)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < n)
    {
        arr3[k++] = arr2[j++];
    }
    i = 0, k = 0;
    for (; i < m; i++)
    {
        arr1[i] = arr3[k++];
    }
    i = 0;
    for (; i < n; i++)
    {
        arr2[i] = arr3[k++];
    }
    cout << "arr1:";
    print(arr1, m);
    cout << "arr2:";
    print(arr2, n);
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {0, 2, 6, 8, 9};
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[m + n];
    merge(arr1, m, arr2, n, arr3);
    print(arr3, m + n);

    return 0;
}