#include <bits/stdc++.h>
using namespace std;
stack<int> s1, s2;
class Queue
{
public:
    void enqueue(int x)
    {
        if (!(s1.empty()))
        {
            while (!(s1.empty()))
            {
                s2.push(s1.top());
                s1.pop();
            }

            s1.push(x);

            while (!(s2.empty()))
            {
                s1.push(s2.top());
                s2.pop();
            }
        }
        else
        {
            s1.push(x);
        }
    }

    int dequeue()
    {
        if (!(s1.empty()))
        {
            int x = s1.top();
            s1.pop();
            return x;
        }
        else
        {
            cout << "stack underflow" << endl;
            return -1;
        }
    }
};
int main()
{
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(10);
    q1.enqueue(10);
    cout << q1.dequeue() << endl;

    return 0;
}