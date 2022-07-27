#include <bits/stdc++.h>
using namespace std;
class squ
{
    int n;
    int *a;

    public :

        squ(int n)
        {
            a = new int[n*n];
        }
        void set(int i , int j , int x)
        {
            int k = i*(i-1)/2 + (j-1);

            a[k] = x;
            k = j*(j-1)/2 + (i-1);
            a[k] = x;


        }
        void display()
        {
            for(int i = 1 ; i <= n ; i++)
            {
                for(int j = 1 ; j <= n ; j++)
                {
                    cout << a[i] << " "; 
                }
                cout << endl;
            }
        
        }


};




int main()
{
    class squ s{5};

    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            if(i <= j)
            {
                s.set(i+1,j+1,j+1);
            }
        }
    }
    s.display();

    return 0;
}