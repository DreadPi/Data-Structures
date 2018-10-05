#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main()
{
    cout<<"enter the numbers to find their gcd"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"gcd :"<<gcd(a,b)<<"\n" ;
    return 0;

}