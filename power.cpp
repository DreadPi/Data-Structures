#include <iostream>
#include <cmath>
using namespace std;
int calc_br(int base,int exp)
{ int x=0;
    if(base==0||base==1)
    {
    	return 1;
	}
	if(exp%2==0)
	{
		x=pow(base,exp/2);
	     return x*x;	
	}
	x=pow(base,(exp-1)/2);
	return x*x*base;
}
int main()
{
	int base ,exp;
	cout<<"enter base and exponent"<<endl;
	cin>>base>>exp;
	cout<<calc_br(base,exp);
	return 0;
}

