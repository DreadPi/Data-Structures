#include <iostream>
using namespace std;
template <class T>
class Stack
{
  T *arr;
  int size;
  int top;
public:
Stack(int s)
{
  size=s;
  arr=new T[s];
  top=-1;
}
T pop();
void push(int );
void display();
bool isEmpty();
bool isFull();



};
template <class T>
T Stack<T>::pop()
{if(top==0)
  {
    cout<<"stack is empty"<<endl;
    return 0;
  }

  return arr[top--];

}
template <class T>
void Stack<T>::push(int x)
{
  if(top==(size-1))
  {
    cout<<"Stack over Flow "<<endl;

  }
  arr[++top]=x;


}
template <class T>
void Stack<T>::display()
{

  if(top==0)
  {
    
    return;
  }
  cout<<"elements in satck are "<<endl;
  for(int i=size-1;i>=0;i--)
  {
    cout<<arr[i]<<"\t ";
  }
  cout<<"\n";
}
template <class T>
bool Stack<T>::isEmpty()
{ bool stat;
  if(top==-1)
  stat=true;
  else
  stat=false;
  return stat;

}
template <class T>
bool Stack<T>::isFull()
{ bool stat;
  if(top==(this.size-1))
  stat=true;
  else
  stat =false;
  return stat;
}
