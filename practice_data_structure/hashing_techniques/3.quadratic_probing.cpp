#include <bits/stdc++.h>
using namespace std;

class Probing
{
    int hash[10] = {0};

public:
    Probing()
    {
    }

    int probe(int val)
    {
        int index = val % 10;
        int i = 0;
        while (hash[(index + (i * i)) % 10] != 0)
            i++;
        return hash[(index + (i * i)) % 10];
    }

    void Insert(int val)
    {
        int index = val % 10;

        if (hash[index] != 0)
            index = probe(val);
        hash[index] = val;
    }

    int Search(int val)
    {
        int index = val % 10;
        int i = 0;
        while (hash[(index + (i * i)) % 10] != val && hash[(index + i * i) % 10] != 0)
        {
            i++;
        }
        return (index + (i * i)) % 10;
    }
};

int main()
{
    Probing p;
    p.Insert(19);
    p.Insert(9);
    p.Insert(29);
    cout << p.Search(29) << endl;
    return 0;
}