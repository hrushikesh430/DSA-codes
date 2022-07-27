#include <bits/stdc++.h>
using namespace std;
struct martice 
{
    int a[10];
    int n;

};

void set_data(struct martice *m , int i , int j , int x)
{
    if(i == j)
    {
        m->a[i-1] = x;
    }
}
int get(struct martice m , int i , int j)
{
    if(i == j)
    {
        return m.a[i-1];
    }
    else
    {
        return 0;
    }
}
void display(struct martice m )
{
    for(int i = 1 ; i <= m.n ; i++)
    {
        for(int j = 1 ; j <= m.n ; j++)
        {
            if(i == j)
            {
                cout << m.a[i-1] << " ";
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
    struct martice m;
    m.n = 5;
    set_data(&m , 1 ,1,5 );
    set_data(&m , 2 ,2,7 );
    set_data(&m , 3 ,3,3 );
    set_data(&m , 4 ,4,2 );  
    set_data(&m , 5 ,5,8 );

    display(m);


    return 0;
}