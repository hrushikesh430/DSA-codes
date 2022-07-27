#include <bits/stdc++.h>
using namespace std;
class lower
{
    int n;
    int *a;

    public :
        lower(int n)
        {
            this -> n = n;
            a = new int [n*(n-2)];
        }
        void set(int i , int j ,int x)
        {
            if(i >= j)
            {
                int k;

                k = i*(i-1)/2 + (j-1);
                a[k] = x;

            }
        }
        void display()
        {
            for(int i = 1 ; i < n ; i++)
            {
                for(int j = 1 ; j < n ; j++)
                {
                    if(i >= j)
                     {
                         int k;

                         k = i*(i-1)/2 + (j-1);
                         cout << a[k] << " ";

                     }
                     else
                     {
                       cout << 0 << " ";
                     }

                }
                cout << endl;
            }
        }


};



int main()
{
    class lower l{5};
    l.set(1,1,5);
    l.set(2,1,5);
    l.set(2,2,9);
    l.set(3,1,5);
    l.set(3,2,3);
    l.set(3,3,9);
    l.set(4,1,4);
    l.set(4,2,1);
    l.set(4,3,2);
    l.set(4,4,7);
    l.set(5,1,6);
    l.set(5,2,5);
    l.set(5,3,8);
    l.set(5,4,2);
    l.set(5,5,8);
    l.display();
    return 0;
}