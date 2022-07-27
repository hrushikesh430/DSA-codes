#include <bits/stdc++.h>
using namespace std;
class matrix
{
    int n;
    int *a;

    public:

        matrix(int n)
        {
            this-> n = n;
            a = new int[n];
        }
        void set( int i , int j ,int x);
        int get(int i , int j);
        void display(void);
       ~matrix()
       {
           delete []a;
       }

};

void matrix :: set(int i ,int j , int x)
{
    if(i == j)
    {
        a[i-1] = x;
    }
}
int matrix :: get(int i , int j)
{
    if(i == j)
    {
        return a[i-1];
    }
    else{
        return 0;
    }
}
void matrix :: display(void)
{
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            if(i == j)
            {
                cout << a[i-1] << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;


    }
}
int main()
{   
    class matrix m{5};
    m.set(1,1,8);
    m.set(2,2,2);
    m.set(3,3,6);
    m.set(4,4,4);
    m.set(5,5,2);

    m.display();

    return 0;
}