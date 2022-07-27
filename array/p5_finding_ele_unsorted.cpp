#include <bits/stdc++.h>
using namespace std;

int max(int a[] , int n)
{
    int max1= a[0];
    for(int i = 0 ; i < n ; i++)
    {
        if( max1 < a[0])
        {
            max1 = a[0];
        }

    }

    return max1;
}
void duplicate(int a[] , int n , int m)
{
    int h[m] = {0};
    
    for(int i = 0 ; i < n ; i++)
    {
        int count = 1;

        if(a[i] != -1)
    {

        for(int j = i + 1 ; j < n ; j++)
        {
            if( a[i] == a[j] )
            {
                count ++;
                a[j] = -1;
            }

        }

    }

        if(count > 1)
        cout << a[i] << " is repeated " << count << " times " << endl;
        
    }

   
    
}
int main()
{   
    int a[]= {3,2,5,7,4,4,5,8,3,7,2};
    int maxx;
    
    maxx = max(a , 11 );

    duplicate(a , 11 , maxx);
 

    return 0;
}