#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
} *first = NULL,*t,*last;

void create(int a[], int n)
{

	first = new node;
	first->data = a[0];
	first->next = NULL;
	last = first;

	for (int i = 1; i < n; i++)
	{
		
		t->data = a[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}
void insert( int ele)
{

	if (first == NULL)
	{
		struct node *k;
		k->data = ele;
		k->next = 0;
		first = k;
	}
	else
	{
		struct node *k;
		k->next = 0;
		k->data = ele;
		last->next = k;
		last = k;
	}
}
void display(struct node *p)
{
	while (p != 0)
	{
		cout << p->data << " ";
		p = p->next;
	}
}
int main()
{
	int a[] = {1, 2, 2};
	create(a, 3);
	insert( 1);
	insert(19);
	insert(20);
	display(first);
	cout << "done";
	return 0;
}