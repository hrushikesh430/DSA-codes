// Name - Hrushikesh Vijaykumar Bhosale
// PRN - 2020BTEIT00047 
// Batch - S3
// Q.) write program for polynomial addittion and Akermann Function

#include <iostream>
using namespace std;

int ack(int m , int n)
{
    if(m == 0)
    {
        return n+1;
    }
    else if((m > 0) && (n == 0))
    {
        return ack(m-1 , 1);
    }
    else if ((m > 0 ) && (n > 0))
    {
        return ack(m-1 , ack(m,n-1));
    }
    else
    {
        return -1;
    }
}

int main()
{
    int A;
    int m , n;
    cout << "enter the values of m and n "<< endl;
    cin >> m >> n;
    A = ack(m , n);

    cout << A << endl;


    return 0;
}