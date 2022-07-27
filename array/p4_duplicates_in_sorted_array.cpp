#include <bits/stdc++.h>
using namespace std;

void sorting(int arr[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(arr[i] > arr[j + 1])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    }

}
void count(int arr[] , int n)
{
    cout << endl;

    for(int i = 0 ; i < n ; i++)
    {

        if( arr[i] == arr[i + 1])
        {
            int j = i + 1;
            while(arr[i] == arr[j]) j++;

            cout << arr[i] << " is " << j-i << " times " << endl;
            i = j -1;

        }


    }



}
void duplicates(int a[] , int n)
{
    int lastduplicate = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] == a[i+1] && a[i] != lastduplicate)
        {
            lastduplicate = a[i];
            cout << lastduplicate << " ";
        }

    }

}
int main()
{
    int b[10] = {1,2,4,4,2,3,5,3 ,10 ,23};

    sorting(b , 10);
    for(int i = 0 ; i < 10 ; i++)
        cout << b[i] << " ";

    cout << endl;

    duplicates(b , 10);
    count(b,10);

    return 0;
}