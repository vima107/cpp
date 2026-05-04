#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    switch(num){
        case 1: 
           cout<<"You've entered 1";
           break;
        case 2: 
            cout<<"You've entered 2";
            break;
        default:
            cout<<"this is default statement";
            break;
        }
        }