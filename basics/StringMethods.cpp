#include<iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout<<"enter your name: "<<endl;
    getline(cin,name);
    cout<<"Your name has "<<name.length()<<" letters"<<endl;
    int n=name.find(' ');
    cout<<"your new id is "<<name.append("@gmail.com")<<endl;

}