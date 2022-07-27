#include <bits/stdc++.h>
using namespace std;


void pairs(int a[] , int n , int k)
{

    for(int i = 0 ; i < n ; i++)
    {

        for(int j = i + 1 ; j < n ; j++)
        {

            if(a[i] + a[j] == k)
            {
                cout << a[i] << " and " << a[j] << endl;

            }


        }

    }



}

int main()
{
    int a[] = {1,3,4,3,5,7,10,0,5,2};
    pairs(a , 10 , 10);

    return 0;
}