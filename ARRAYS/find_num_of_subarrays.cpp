// To Find Number of Sub arrays of a Given Array

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
                count++;
            }
            cout << endl;
        }
    }
    cout << "The no. of sub arrays is : " << count;
    return 0;
}