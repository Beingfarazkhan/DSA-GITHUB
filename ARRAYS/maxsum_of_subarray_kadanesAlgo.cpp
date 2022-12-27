// max Sum of an Subarray using Kadane's Algorithm
// Time complexity = O(n)

#include <iostream>
using namespace std;

int main()
{
    int a[9] = {-4, 1, 3, -2, 6, 2, -1, 4, -7};
    int n = 9;
    int cs = 0, ms = 0;

    // Kadane's Algorithm :
    for (int i = 0; i < n; i++)
    {
        cs = cs + a[i];
        if (cs < 0)
        {
            cs = 0;
        }
        ms = max(cs, ms);
    }
    cout << "The Highest Sum is " << ms;
    return 0;
}