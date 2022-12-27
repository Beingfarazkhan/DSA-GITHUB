// Find Subarray with Maximum Sum : Method - 2 (cumulative sum)
//  Time complexity = O(n^2)

#include <iostream>
using namespace std;

int main()
{
    int a[9] = {-4, 1, 3, -2, 6, 2, -1, 4, -7};
    int n = 9;
    int highest_sum = 0;
    int highest_lowerindex;
    int highest_upperindex;
    int csum[9] = {0};
    csum[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        csum[i] = csum[i - 1] + a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int total = csum[j] - csum[i - 1];
            if (total >= highest_sum)
            {
                highest_sum = total;
                highest_lowerindex = i;
                highest_upperindex = j;
            }
        }
    }
    cout << "The sub array with highest sum is ";
    for (int i = highest_lowerindex; i <= highest_upperindex; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nThe highest sum is : " << highest_sum;

    return 0;
}