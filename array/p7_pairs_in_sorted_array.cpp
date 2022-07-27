#include <bits/stdc++.h>
using namespace std;

void pairs(int a[], int n, int k)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {

        if (a[i] + a[j] == k)
        {
            cout << a[i] << " and " << a[j] << endl;
            i++;
            j--;
        }
        else if (a[i] + a[j] < k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7, 8, 10, 11, 12};
    pairs(arr, 10, 10);
    return 0;
}
