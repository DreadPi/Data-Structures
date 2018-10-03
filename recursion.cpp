#include <iostream>

using namespace std;
void print()
{
  char ch;
  ch=getchar();
   
  if(ch!='\n')
  print();
  cout<<ch;
 
 
}
int main()
{
    print();
    return 0;
}
