#include <bits/stdc++.h>
using namespace std;
class node;
 node *head =NULL;
class node
{
    int data;
    node *next;

    public :
       // node *head =NULL;
        void arrcreate(int arr[] , int n)
        {
            node *t ,* last;
            head = new node;
            head->data = arr[0];
            head->next = NULL;
            last = head;

            for(int i = 1 ; i < n ; i++)
            {
                t  = new node;
                t->data = arr[i];
                t->next = NULL;
                last->next = t;
                last = t;
            }
        }

        void display()
        {
            node *p;
            p= head;
            while(p)
            {
                cout << p->data << " ";
                p = p ->next;
            }
            cout << endl;
        }

        void insert_ata_rear(int x)
        {
            node *t , *p;
            t = new node;
            p = head;
            while(p->next != NULL)
                p = p->next;

            t->data = x;
            p->next = t;
            t->next = NULL;
        }

        void insert_at_front(int x)
        {
            node *t;
            t = new node;
            t->data = x;
            t->next = head;
            head = t;
        }
        void delete_at_front()
        {
            node *p = head;
            head = head->next;
            delete p;

        }
        void delete_at_rare()
        {
            node *q ,*p = head;
            while(p->next != NULL)
            {   
                q = p;
                p = p->next;
            }

            q->next = NULL;
            delete p;
        }

        int countnodes()
        {
            node *p = head;
            int count  = 0 ;
            while(p)
            {
                count++;
                p = p->next;
            }
            return count;
        }

        void check_loop()
        {
            node *p ,*q;
            p = q = head;
            do{
                p = p->next;
                q = q->next;
                if(q == NULL)
                {
                    q = NULL;
                }
                else
                {
                    q = q->next;
                }

            }while(p && q);

            if(p == q)
            {
                cout << "yes, there is loop in the linked list" << endl;
            }
            else
            {
                cout << "no, there is no loop in linked list" << endl;
            }
        }
        
        void search(int x)
        {
            node *p = head;
            while(p)
            {
                if(p->data == x)
                {
                    cout << "yes the element is present" << endl;
                    break;
                }

                p = p->next;
            }

        }


        void advance_search(int x)
        {
            node *p , *q;

            p = head;
            while(p)
            {
                q = p;
                p = p->next;
                if(p->data == x)
                {
                    q->next = p->next;
                    p->next = head;
                    head = p;
                    cout << "yes , the element is present" << endl;
                    break;
                }

            }

        }

        void reversing_using_sliding_pointers()
        {
            node *p , *q , *r;
            r = NULL;
            p = head;
            while(p)
            {
                r = q;
                q = p ;
                p = p->next;
                q->next = r;
            }

        }

        void Check_weather_sorted()
        {
            node *p;
            p = head;
            node *q;
            int flag = 0;
            while(p->next != NULL)
            {
                q = p;
                p = p->next;
                if(q->data > p->data)
                {
                    cout << "no ll is not sorted" << endl;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                cout << "yes ll is sorted" << endl;
            }

        }

        void rdisplay(node *p)
        {
            if(p)
            {
                cout << p->data << " ";
                rdisplay(p->next);
            }
        }


};


int main()
{
    node n;
    int arr[] = {1,2,3,4,5,6,7};
    n.arrcreate(arr,7);
    n.display();
   n.insert_at_front(1000);
    n.insert_ata_rear(999);
    n.display();
    n.delete_at_front();
    n.delete_at_rare();
    n.display();
    n.search(5);

    int ans;
    ans = n.countnodes();
    cout << ans << endl;
   n.check_loop();
   n.Check_weather_sorted();
   n.rdisplay(head);



    return 0;
}