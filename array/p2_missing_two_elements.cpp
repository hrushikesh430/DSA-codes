#include <bits/stdc++.h>
using namespace std;


void missing_two_ele(int arr[] , int n)
{
    int diff;
    diff = arr[0];

    for(int i = 0 ; i < n ; i++)  // this is wrong methos
    {
        if(arr[i] - i != diff)
        {
            cout << diff + i << endl;
            diff ++;

        }


    }

}

void missing_second_method(int arr[] , int n)
{
    int diff;
    diff = arr[0];

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] - i != diff)
        {
            while(diff < arr[i] - i)
            cout << diff + i << endl;
            diff ++;

        }


    }



}

int main()
{
    
    int n = 10;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
  //  missing_two_ele( a , 10);


    return 0;
}