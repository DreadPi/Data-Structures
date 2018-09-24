#include <iostream>
using namespace std;
class Queue
{
    int size;
    int *arr;
    int front;
    int rear;

    public:
    Queue(int size)
    {
        if(size<=0)
        {
            throw "invalid queue size";
        }
        this->size=size;
        arr=new int[size];
        front=rear=-1;

    }
    void enQueue(int );
    int  deQueue();
    bool isFull();
    bool isEmpty();
    void display();
     


};
bool Queue::isFull()
{ 
      bool flag=false;
    if(this->rear==size-1)
    {
        flag=true;
    }
    return flag;
    
}
bool Queue::isEmpty()
{
    bool flag=false;

    if(front==-1)
    {
        flag=true;
    }
    return flag;
}
void Queue::enQueue(int x)
{
    if(this->isFull())
    {
        cout<<"Sorry Queue is Full \n";
        return;
    }
   else if(front==-1)
    {
        arr[++front]=x;
        rear++;
        return;
    }
    
     arr[++rear]=x;
    

}
int Queue::deQueue()
{   int x=0;
    if(this->isEmpty())
    {
       throw "Sorry queue is empty";
        
    }
     x=arr[front];
     
     for(int i=front;i<rear;i++)
     {
         arr[i]=arr[i+1];

     }
     rear--;
      
     return x;
     
    


}
void Queue::display()
{   
    if(this->isEmpty())
    {
        return;
    }
    for(int i=0;i<=rear;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

}

int main()
{
    int choice;
    int element;
    int temp;
    char response='Y';
    cout<<"Enter the Queue Size"<<endl;
    cin>>temp;
    Queue Q(temp);
    cout<<"Enter Choice to perform following operation \n";
    cout<<"1.EnQueue \n 2.DeQueue \n 3.Display \n  \n";
    do
    {
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"enter element to added onto the Queue "<<endl;
            cin>>element;
            Q.enQueue(element);
            break;

            case 2:
            element=Q.deQueue();
            cout<<"Element deQueued is \n";
            cout<<element<<endl;
            break;

            case 3:
            cout<<"Element in Queue are \n";
            Q.display();
            break;

            case 4:
            choice=0;
            break;

            default:
            cout<<"enter a valid value \n";
            break;

           


        }
        

        
    }
    while(choice!=0);

    return 0;
}
