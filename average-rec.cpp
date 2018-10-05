#include <iostream>
using namespace std;
double average(int *a,int  i)
{
    if(i==1)
    return a[i];
   return (a[i]+average(a,i-1)*(i-1))/i;

}

int main()
{
    cout<<"enter the number of terms"<<endl;
    int terms;
    cin>>terms;
    int *arr=new int[terms+1];
    cout<<"enter its values"<<endl;
    for(int i=1;i<terms+1;i++)
    {
        cin>>arr[i];
    }
    cout<<"average:"<<average(arr,terms)<<endl;






    return 0;
}
