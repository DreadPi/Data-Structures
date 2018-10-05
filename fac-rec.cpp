#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    return 1;

    return n*fact(n-1);

}
int main()
{   int num;
    cout<<"enter the number to find its factorial "<<endl;
    cin>>num;
    cout<<"factorial:"<<fact(num)<<"\n";


    return 0;
}