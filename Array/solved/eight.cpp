// kadanes algortihm
#include <iostream>
using namespace std;
int maxSubArraySum(int *arr, int size)
{
    int max_assume = INT32_MIN, max_end_here = 0;
    for (int i = 0; i < size; i++)
    {
        max_end_here = max_end_here + arr[i];
        if (max_assume < max_end_here)
        {
            max_assume = max_end_here;
        }
        if (max_end_here < 0)
        {
            max_end_here = 0;
        }
    }
    return max_assume;
}

int main()
{
    int a[] = {-1, -2, -3, -4};
    int n = sizeof(a) / sizeof(a[0]);

    // Function Call
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}