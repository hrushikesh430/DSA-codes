// Name - Hrushikesh Vijaykumar Bhosale
// PRN - 2020BTEIT00047 
// Batch - S3

// Q.) write program for polynomial addittion and Akermann Function

#include <iostream>
using namespace std;


struct node
{
    float coeff;
    int expo;
    struct node *link;
};

typedef struct node *NODE;

NODE insert(struct node *head, float co, int exp)
{
    struct node *tmp;
    struct node *new1;
    new1 =(NODE)malloc(sizeof(NODE));
    new1->coeff=co;
    new1->expo=exp;
    new1->link=NULL;

    if(head==NULL || exp>head->expo)
    {
        new1->link=head;
        head=new1;
    }
    else
    {
        tmp=head;
        while(tmp->link!=NULL && tmp->link->expo >=exp)
        {
            tmp=tmp->link;
        }
        new1->link=tmp->link;
        tmp->link=new1;
    }
    return head;
}

void print(struct node  *head)
{
    if(head==NULL)
    {
      cout << endl << "no polynomial" << endl;
    }
    else
    {
        NODE tmp=head;
        while(tmp!=NULL)
        {
            printf(" %.1fx^%d ",tmp->coeff,tmp->expo);
            tmp=tmp->link;
            if(tmp!=NULL)
                cout << "+" ;
            else
                cout << endl;
        }
    }
}

NODE creatnode(struct node  *head)
{
    int n,i;
    float co;
    int exp;
    cout << "enter the no. of terms " ;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cout << "enter the coefficient for term " << i+1 <<  endl;
        cin >> co;
        cout << "enter the exponent for term " << i+1 << endl;
        cin >> exp;
        head=insert(head,co,exp);
    }
    return head;
}

void polyadd(NODE head1, NODE head2)
{
    NODE ptr1=head1;
    NODE ptr2=head2;
    NODE head3=NULL;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->expo==ptr2->expo)
        {
            head3=insert(head3,ptr1->coeff+ptr2->coeff,ptr1->expo);
            ptr1=ptr1->link;
            ptr2=ptr2->link;
        }
        else if(ptr1->expo > ptr2->expo)
        {
            head3=insert(head3,ptr1->coeff,ptr1->expo);
            ptr1=ptr1->link;
        }
        else if(ptr1->link < ptr2->link)
        {
            head3=insert(head3,ptr2->coeff,ptr2->expo);
            ptr2=ptr2->link;
        }
    }
    while(ptr1!=NULL)
    {
        head3=insert(head3,ptr1->coeff,ptr1->expo);
        ptr1=ptr1->link;
    }
    while(ptr2!=NULL)
    {
        head3=insert(head3,ptr2->coeff,ptr2->expo);
        ptr2=ptr2->link;
    }
    cout << "polynomial added" << endl;
    print(head3);
}

int main()
{
    NODE head1=NULL;
    NODE head2=NULL;
    
    cout << "enter the first polynomial" << endl;
    head1=creatnode(head1);
    cout << "first polynomial inserted" << endl;
    print(head1);
    
    cout << "enter the first polynomial" << endl;
    head2=creatnode(head2);
    cout << "secon polynomial inserted" << endl;
    print(head2);
    
    cout << "addition of two polynomials : " << endl;
    polyadd(head1,head2);
    return 0;
}