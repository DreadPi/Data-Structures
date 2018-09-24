#include <iostream>
using namespace std;
template <class T>
class Node
{
    friend class SLL;
     public:
	Node<T> *next;
  	T data;

	Node(T x,Node<T> *n=0)
    {
      data=x;
      next=n;
    }
 	
    

};
template <class T>   
class SLL
{
	Node<T> *head;
    Node<T> *tail;
    public:
    SLL()
    {
      head=NULL;
      tail=NULL;
    }
	void addtoHead(T x);
	void addtoTail(T x);
	void display();
	int  count();
	
};


    template <class T>
    void SLL<T>::addtoHead(T x)
    {
		Node<T> *p=new Node<T>(x);
        if(head==NULL)
        {
            head=p;
            tail=p;
        }
        else
		{
		  
          p->next=head;
          head=p;
		}
	}
    template <class T>
    void SLL<T>::addtoTail(T x)
    {
        Node<T> *p=new Node<T>(x);
        if(head==NULL)
        {
            head=p;
            tail=p;
        }
        else
		{
		tail->next=p;
		tail=p;
          
        }
    }
    template <class T>
    void SLL<T>::display()
	{
      	Node<T> *temp=head;
      	while(temp!=0)
      	{
      		cout<<temp->data<<"\t";
      		temp=temp->next;
      	
		}
  		cout<<endl;
	}
    template <class T>
	int SLL<T>::count()
    {
      	int x;
      	if(head==0)
		  {
		  	x=0;
		  }
		Node<T> *temp=head;
		  
		while(temp!=0)
		{
		 	temp=temp->next;
		 	x++;
		} 
		  return x;
	}
  

	  
    


int main()
{
	SLL <int>S;
 	int n;
 	do
 	{
 		cout<<"Linked List Version 2.0 Copyright under 23Act\n 1.Add to head \n 2.Add to tail \n 3.Count number of elements \n 4.Display the elements \n 5.Exit"<<endl;
 		cin>>n;
 		switch(n)
 		{
 		
 			case 1:
 				{
				cout<<"Enter the element value to be added"<<endl;
 				int x;
 				cin>>x;
 				S.addtoHead(x);
 				break;
			 	}
 		
 			case 2:
 				{
 				cout<<"Enter the element value to be added"<<endl;
 				int x;
 				cin>>x;
 				S.addtoTail(x);
 				break;
			    }
			case 3:
 				{
 				int x=S.count();
 				cout<<"Number of elements are :"<<x<<endl;
 				break;
			    }
			 
		    case 4:
 			{
 				S.display();
 				break;
			}	 
 			case 5:
 			{
			 
				n=0;
 				break;
			}
 		
 	    }
 		
 		
 		
	}
	 while(n!=0);
	 


	return 0;
}
