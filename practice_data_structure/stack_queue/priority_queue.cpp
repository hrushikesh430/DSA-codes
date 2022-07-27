#include <bits/stdc++.h>
using namespace std;

class PriorityQueue
{
public:
    struct queue
    {
        int priority;
        int value;
        int size;
    } pr[10];

    int size = -1;

    PriorityQueue()
    {
        struct queue pr[10];
    }

    PriorityQueue(int num)
    {
        struct queue pr[num];
    }

    void enqueue(int value, int priority)
    {
        size++;

        pr[size].value = value;
        pr[size].priority = priority;
    }

    int peek()
    {
        int ind = -1;
        int highestPriority = INT_MIN;

        for (int i = 0; i <= size; i++)
        {
            if ((highestPriority == pr[i].priority) && (ind > 0) && (pr[ind].value > pr[i].value))
            {
                highestPriority = pr[ind].priority;
                ind = i;
            }
            else if ((highestPriority < pr[i].priority))
            {
                highestPriority = pr[i].priority;
                ind = i;
            }
        }

        return ind;
    }

    int dequeue()
    {
        int j = peek();
        int x = pr[j].value;

        for (int i = j; i < size; i++)
        {
            pr[i] = pr[i + 1];
        }
        size--;
        return x;
    }
};

int main()
{
    PriorityQueue p;
    p.enqueue(10, 1);
    p.enqueue(1000, 10);
    p.enqueue(97, 3);
    cout << p.dequeue() << endl;

    return 0;
}