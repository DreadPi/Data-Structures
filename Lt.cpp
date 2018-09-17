#include <iostream>
using namespace std;
class Lt{
	int n;
	int *data;
	public:
	Lt(int n)
	{
		if(n<0)
		{
		throw "invalid value for number of elements  ";
		}
		this->n=n;
		data=new int[(n*(n+1))/2];
	}
	
	
	void set(int i,int j,int value)
	{

		if(i<j&&value!=0&&j<n)
		throw "invalid value";
	
	int k;
	k=(i*(i-1))/2 +j-1;
	data[k]=value;
   }
	int  get(int i,int j)
	{int x;

		if(i<=0||j<=0&&j>n||i>n)
	throw "invalid index";
	else{
	
	int k;
	k=(i*(i-1))/2 +j-1;
	x=data[k];}
	return x;
   }
	
};
	int main()
	{int n;
		cout<<"enter number of elements in lower triangular matrix \n";
		cin>>n;
		Lt L1(n);
		int i,j,val;
		cout<<"col number nd row number then value to set one by one";
		cin>>i>>j>>val;
		
		L1.set(i,j,val);
	cout<<	L1.get(i,j)<<endl;
		
		
		
		
		
		
		return 0;
	}
	
	
	
	
	
