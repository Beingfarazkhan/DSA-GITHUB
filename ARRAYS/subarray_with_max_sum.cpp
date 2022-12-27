// Finding Subarray with Maximum Sum - Method 1
// Time complexity : O(n^3)

#include <iostream>
using namespace std;

int sum(int a[], int fp, int lp)
{
    int total = 0;
    for (int i = fp; i <= lp; i++)
    {
        total += a[i];
    }
    return total;
}

int main()
{
    int highest_sum = 0;
    int highest_lowerindex;
    int highest_upperindex;
    int a[9] = {-4, 1, 3, -2, 6, 2, -1, 4, -7};
    int n = 9;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                int total = sum(a, i, j);
                if (total >= highest_sum)
                {
                    highest_sum = total;
                    highest_lowerindex = i;
                    highest_upperindex = j;
                }
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