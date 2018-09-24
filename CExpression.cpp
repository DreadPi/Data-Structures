#include "Stack.h"
#include <iostream>
#include <string>
using namespace std;

string& toPostfix(string &s)
{ string s2="";
int prio_s=0;
int prio_e=0;

  Stack<char> S(s.length());
  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='+'||s[i]=='-'||s[i]=='/'||s[i]=='*')
    { if(S.isEmpty())

      S.push(s[i]);
    }

    else
    s2.append(s[i].to_string());

  }
  S.display();




}

int main()
{
  string s1="";
  cout<<"enter a expression in infix notation"<<endl;
  cin>>s1;
  toPostfix(s1);




}
