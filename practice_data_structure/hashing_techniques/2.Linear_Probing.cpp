#include <bits/stdc++.h>
using namespace std;

class Probing
{
    int hash[10];

public:
    Probing()
    {
        for (int i = 0; i < 10; i++)
            hash[i] = 0;
    }

    int hashKey(int ele)
    {
        return (ele % 10);
    }

    int Probe(int val)
    {
        int index = hashKey(val);
        int i = 0;
        while (hash[(index + i) % 10] != 0)
            i++;

        return (index + i) % 10;
    }

    void Insert(int val)
    {
        int index = hashKey(val);

        if (hash[index] != 0)
            index = Probe(val);

        hash[index] = val;
    }

    int Search(int val)
    {
        int index = hashKey(val);
        int i = 0;
        while (hash[(index + i) % 10] != val && hash[(index + i) % 10] != 0)
            i++;

        if (hash[(index + i) % 10] == 0)
            return -1;

        return (index + i) % 10;
    }
};

int main()
{

    Probing p;
    p.Insert(9);
    p.Insert(19);
    cout << p.Search(20) << endl;

    return 0;
}