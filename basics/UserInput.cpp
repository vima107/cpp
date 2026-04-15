#include<iostream>
#include <string>
using namespace std;

int main(){
    int age;
    string name;

    cout<<"how old are you: ";
    cin>> age;

    cout<<"what's your full name: ";
    getline(cin>>ws,name);

    cout<<"Hi "<<name<<" you're "<<age<<" old";
    return 0;
}

// "cin >>" is used to take input from user

// "getline(cin,variable)" method is use to take string with spacee
// for example "vimal kumar" here i can see multiple words are there in 
// that case have to use this method.

// so in case if i use "cin>>" before "getline()" in that case after the 
// first input next input will not be taken because

// When you use cin >> age, the >> operator leaves a newline character (\n)
// in the input buffer. If you then call getline(cin, name) 
// immediately, it reads that leftover newline and returns an empty string.

// to avoid this one i can use,

// "getline(cin>>ws,variable)" the ws i.e, whitespace will be considered 
// and it'll resolve the issue

