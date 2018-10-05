#include <iostream>
using namespace std;

int fib(int n)
{
    int y1,y2,z;
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    y1=fib(n-1);
    y2=fib(n-2);
 
    z=y1+y2;
    return z;

    
}
int main()
{
    
    cout<<"enter term to find its fibonacci"<<endl;
    int num;
    cin>>num;
    cout<<fib(num);
    return 0;
}