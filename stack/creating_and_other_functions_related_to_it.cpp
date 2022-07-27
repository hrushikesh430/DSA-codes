#include <bits/stdc++.h>
using namespace std;
struct stack1
{
    int size;
    int top;
    int *s;
};
void push(stack1 *st, int ele)
{
    if (st->top == st->size -1 )
    {
        cout << "stack is overflow " << endl;
    }
    else
    {
        st->top++;
        st->s[st->top] = ele;
    }
}
void pop(stack1 *st)
{
    int x = -1;
    if (st->top == -1)
    {
        cout << "stack is underflow " << endl;
    }
    else
    {
        x = st->s[st->top];
        st->top--;
    }
}
int peek(stack1 *st, int pos)
{
    if (pos > st->size - 1)
    {
        return -1;
    }
    else
    {
        return st->s[st->top - pos + 1];
    }
}
void stacktop( stack1 st)
{
    if(st.top == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << st.s[st.top] << endl;
    }
}
int isEmpty(stack1 st)
{
    if(st.top == st.size -1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int isFull( stack1 st)
{
    if(st.top > st.size - 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    struct stack1 st;
    st.size = 5;
    int ans;
    st.s = new int [st.size];
    st.top = -1;
    push(&st , 1);
    push(&st , 2);
    push(&st , 3);
    push(&st , 4);
    push(&st , 5);
    ans = peek(&st , 2);
    cout << ans << endl;
    stacktop(st);

    return 0;
}