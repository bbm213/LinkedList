// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
}*first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node* t, * last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }


}

void display(struct Node* p)
{
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }

}

void RDisplay(struct Node *p)
{
    while (p!=NULL)
    {
        cout << p->data << endl;
        RDisplay(p->next);
    }
}

int Count(struct Node *p)
{
    int c = 0;
    while (p!=NULL)
    {
        c++;
        p=p->next;
    }
    return c;
}

int RCount(struct Node *p)
{
    if (p==NULL)
    {
        return 0;
    }
    else
    {
        return RCount(p->next) + 1;
    }
}

int Sum(struct Node *p)
{
    int sum = 0;
    while (p)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int RSum(struct Node *p)
{
    if (p==NULL)
    {
        return 0;
    }
    else 
    {
        return RSum(p->next) + p->data;
    }
}

int Max(struct Node *p)
{
    int max = INT32_MIN;
    while (p)
    {
        if (p->data>max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

int main()
{
    int A[] = { 1,2,3,4,5 };
    create(A, 5);
    display(first);
    
    cout << "The number of elements is " << Count(first)<<endl;
    cout << "The sum of elements is " << Sum(first)<<endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
