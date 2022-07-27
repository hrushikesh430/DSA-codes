#include <bits/stdc++.h>
using namespace std;

class Probing
{
    int Hash[10] = {0};

public:
    Probing() {}

    int HashKey(int val)
    {
        return val % 10;
    }

    int probe(int val)
    {
        int index = HashKey(val);
        int i = 0;
        while (Hash[(index % 10 + i * (7 - (index % 7))) % 10] != 0)
            i++;

        return (index % 10 + i * (7 - (index % 7))) % 10;
    }

    void Insert(int val)
    {
        int index = HashKey(val);

        if (Hash[index] != 0)
            index = probe(val);
        Hash[index] = val;
    }

    int Search(int val)
    {
        int index = HashKey(val);
        int i = 0;
        while (Hash[(index % 10 + (i * (7 - (index % 7)))) % 10] != val)
            i++;

        return (index % 10 + i * (7 - (index % 7))) % 10;
    }
};

int main()
{
    Probing p;
    p.Insert(9);
    p.Insert(19);
    cout << p.Search(19) << endl;
    return 0;
}