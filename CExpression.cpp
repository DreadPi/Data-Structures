#include "Stack.h"
#include <iostream>
#include <string>
using namespace std;

string& toPostfix(string &s)
{ string s2="";

  Stack<char> S(s.length());
  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='+'||s[i]=='-'||s[i]=='/'||s[i]=='*')
    {


        S.push(s[i]);

    }
    s2=s2+s[i];

  }
  S.display();
  cout<<s2;



}

int main()
{
  string s1="";
  cout<<"enter a expression in infix notation"<<endl;
  cin>>s1;
  toPostfix(s1);




}
