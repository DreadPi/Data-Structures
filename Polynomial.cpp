#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int c = 0;
class  node
{ friend class Polynomial;
    node *next, *prev;
    int degree ,cof;


};
class Polynomial{
node *head = NULL, *tail = NULL, *p = NULL, *r = NULL, *np = NULL;
public:
void create(int,int);
void traverse_head();
void traverse_tail();




};
void Polynomial::create(int x,int cf )
{
    np = new node;
    np->degree = x;
    np->cof=cf;
    np->next = NULL;
    np->prev = NULL;
    if (c == 0)
    {
        tail = np;
        head = np;
        p = head;
        p->next = NULL;
        p->prev = NULL;
        c++;
    }
    else
    {
        p = head;
        r = p;
    if (np->degree < p->degree)
    {
        np->next = p;
        p->prev = np;
        np->prev = NULL;
        head = np;
        p = head;
        do
        {
            p = p->next;
        }
        while (p->next != NULL);
        tail = p;
    }
    else if (np->degree > p->degree)
    {
        while (p != NULL && np->degree > p->degree)
        {
            r = p;
            p = p->next;
        if (p == NULL)
        {
            r->next = np;
            np->prev = r;
            np->next = NULL;
            tail = np;
            break;
        }
  else if(np->degree < p->degree)
        {
            r->next = np;
            np->prev = r;
            np->next = p;
            p->prev = np;
            if (p->next != NULL)
            {
                do
                {
                    p = p->next;
                }
                while (p->next !=NULL);
            }
            tail = p;
            break;
         }
       }
     }
   }
}
void Polynomial::traverse_tail()
{
    node *t = tail;
    while (t != NULL)
    {
        cout<<t->degree<<"\t";
        t = t->prev;
    }
    cout<<endl;
}
void Polynomial::traverse_head()
{
    node *t = head;
    while (t != NULL)
    {
        cout<<t->degree<<"\t";
        t = t->next;
    }
    cout<<endl;
}

int main()
{ Polynomial P;
    int i = 0, n, x, ch,cof;
    cout<<"enter the no of terms\n";
    cin>>n;
    while (i < n)
     {
         cout<<"\n enter  degree:";
         cin>>x;

         cout<<"\n enter coeffecient:";
         cin>>cof;
         P.create(x,cof);
         i++;
     }
     cout<<"\nTraversing Doubly Linked List head first\n";
     P.traverse_head();
     cout<<"\nTraversing Doubly Linked List tail first\n";
     P.traverse_tail();
    getch();
 }
