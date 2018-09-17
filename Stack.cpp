class Stack
{
  int *arr;
  int size;
  int top;

Stack(int s)
{
  size=s;
  arr=new int[s];
  top=-1;
}
int pop();
void push(int );
void display();



};
int Stack::pop()
{if(top==0)
  {
    cout<<"stack is empty"<<endl;
    return 0;
  }

  return arr[t--];

}
void Stack::push(int x)
{
  if(top==(size-1))
  {
    cout<<"Stack over Flow "<<endl;

  }
  arr[++top]=x;


}
void Stack::display()
{

  if(top==0)
  {
    cout<<"no elments found!\n"
    return;
  }
  cout<<"elements in satck are "<<endl;
  for(int i=size-1;i>=0;i--)
  {
    cout<<arr[i]<<"\t ";
  }
  cout<<"\n";
}
int main()
{
  int choice;
  int Stack_Size;
  cout<<"enter the size of Stack \n";

  cin>>Stack_size;

  Stack S(Stack_size);
  cout<<"enter the option number to execute that command \n 1.Push elements in stack \n 2.Pop elements in stack \n 3.Display elements of the stack \n 4.Exit"<<endl;

  do{

      cin>>choice;
      switch(choice)
      {
        case 1:
        {
          S.push();
          break;
        }
        case 2:
        {
          S.pop();
          break;
        }
        case 3:
        {
          S.display();
          break;
        }
        case 4:
        {
          cout<<"Exiting \n";
          choice =0
          break;
        }
        default:
        {
          cout<<"invalid option please try again \n"
          break;
        }
      }
    }
  while(choice!=0);











 return 0;
  }
