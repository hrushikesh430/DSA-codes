#include <bits/stdc++.h>
using namespace std;
class Node;
Node *head = NULL;
class Node
{
    int data;
    Node *next;

public:
    Node()
    {
    }

    Node(int data)
    {

        this->data = data;
    }

    void Insert(int data)
    {
        if (head == NULL)
        {
            head = new Node(data);
            head->next = NULL;
            return;
        }

        Node *temp = new Node(data);
        temp->next = NULL;
        head->next = temp;
    }

    int Delete()
    {
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
            return -1;
        }

        int x = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        return x;
    }
};

class Stack : public Node
{

public:
    void push(int x)
    {
        Insert(x);
    }

    int pop()
    {
        int x = Delete();
        return x;
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << s.pop() << endl;

    return 0;
}