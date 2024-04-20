#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = arr[0],max_sum = arr[0];
    for (int i = 1; i < size; i++)
    {
        sum = max(arr[i],sum + arr[i]);
        max_sum = max(max_sum, sum);
    }
    cout << max_sum << endl;

    // int maxsum = 0, sum = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = i; j < size; j++)
    //     {
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum = sum + arr[k];
    //         }
    //         if (maxsum < sum)
    //             maxsum = sum;
    //         sum = 0;
    //     }
    // }
    // cout << maxsum << endl;

    return 0;
}
