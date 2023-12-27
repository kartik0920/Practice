// find the union and intersection of two array

#include <iostream>
#include <map>
using namespace std;
int Dounion(int *arr1, int m, int *arr2, int n)
{
    map<int, bool> mapping;
    int i = 0;
    for (; i < m; i++)
    {
        mapping[arr1[i]] = 1;
    }
    // int j=i;
    for (int j = 0; j < n; j++)
    {
        mapping[arr2[j]] = 1;
    }

    return mapping.size();
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {1, 2, 3, 8, 9};
    int n = sizeof(arr2) / sizeof(arr2[0]);
    cout << Dounion(arr1, m, arr2, n) << endl;
    return 0;
}