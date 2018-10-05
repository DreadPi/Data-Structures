#include <iostream>
using namespace std;
string remove(string s,char re, int i)
{
    if(i==-1)
    return s;
    if(s[i]==re)
    {
        if(i != s.size() - 1)
            s=s.substr(0,i)+s.substr(i+1);
        else
            s=s.substr(0,i);

    }
    return remove(s,re,i-1);

}
int  main()
{
    string s="";
    cout<<"enter a word"<<endl;
    cin>>s;
    char c;
    cout<<"enter char to remove from string "<<endl;
    cin>>c;
    cout<<"string:"<<remove(s,c,s.size() - 1)<<endl;
    return 0;




}