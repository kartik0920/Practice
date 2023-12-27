// sort 0 1 and 2
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
void sortArr(int *arr, int size)
{
    int zero_cnt = 0, one_cnt = 0, two_cnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zero_cnt++;
        }
        if (arr[i] == 1)
        {
            one_cnt++;
        }
        if (arr[i] == 2)
        {
            two_cnt++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (zero_cnt != 0)
        {
            arr[i] = 0;
            zero_cnt--;
        }
        else if (one_cnt != 0)
        {
            arr[i] = 1;
            one_cnt--;
        }
        else if (two_cnt != 0)
        {
            arr[i] = 2;
            two_cnt--;
        }
    }
}
int main()
{
    int arr[] = {0, 2, 1, 2, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    print(arr, size);
    cout << "After sort";
    sortArr(arr, size);
    print(arr, size);
    return 0;
}