#include <bits/stdc++.h>
using namespace std;
class Queue
{
    int size;
    int front ,rear;
    int *q;
    public :

        void create(int x)
        {
            size = x;
            q = new int[x];
            front = rear = -1;
        }

        void enqueue(int x)
        {
            if(is_full())
            {
                cout << "queue is full" << endl;
            }
            else
            {
                front++;
                q[front] = x;
            }
        }
        int dequeue()
        {
            int x = 0;
            if(is_empty())
            {
                cout << "queue id empty" << endl;
            }
            else
            {
                rear++;
                x = q[rear];

            }
            return x;
        }

        int is_empty()
        {
            if(front == rear)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        int is_full()
        {
            if(front == size -1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        void show()
        {
            while(rear != front)
            {
                rear++;
                cout << q[rear] << " ";
            }
            cout << endl;
        }
};
int main()
{
    class Queue q;
    q.create(10);
    q.enqueue(10);
    q.enqueue(100);
    q.enqueue(122);
    q.enqueue(94);
    q.enqueue(83);

    int data;
    data = q.dequeue();
    cout << data << endl;
    q.show();

    return 0;
}