#include<iostream>
using namespace std;

void changeValue(int* p){
    *p =20;
}

int main(){

    int a=10;
    int* p=&a;
    changeValue(p);
    cout<<"value inside a "<<a<<endl;
    cout<<"value inside p: "<<p<<endl;
    cout<<"address o a: "<<&a<<endl;
    cout<<"value of address stored in p: "<<*p<<endl;
    cout<<"address of p: "<<&p<<endl;
    cout<<endl;
    cout<<endl;

    // assigning array to a pointer                                        
    int arr[]={1,2,3,4,5};
    int *pArr=arr;
    cout<<"value inside pArr: "<<*pArr<<endl;
    pArr=pArr+1;
    cout<<"updated value in pArr: "<<*pArr<<endl;
    cout<<endl;
    cout<<endl;

    //double pointer
    int c=7;
    int *q=&c;
    int **r=&q;

    cout<<"value of c before modifcation: "<<c<<endl;
    cout<<"value of address stored inside q: "<<*q<<endl;
    cout<<"value of address of address stored in r: "<<**r<<endl;
    cout<<"address of c: "<<&c<<endl;
    cout<<"value inside q: "<<q<<endl;
    cout<<"value inside r: "<<r<<endl;
    cout<<"address of q: "<<&q<<endl;
    cout<<"address of r: "<<&r<<endl;
    cout<<endl;

    *q=14;
    cout<<"value of c after modification by q: "<<c<<endl;
    cout<<"q: "<<*q<<endl;
    cout<<"r: "<<**r<<endl;
    cout<<endl;

    **r=28;
    cout<<"value of c after modifiction by r: "<<c<<endl;
    cout<<"q: "<<*q<<endl;
    cout<<"r: "<<**r<<endl;
    cout<<endl;
    return 0;
    
}

/*
    pointer is use to manipulated data like changing the value
    so, we can define a pointer using "data type" with "*"
    and to  pointer ariable i can assign a address of a variable that contains data 

    for example:
    int a=10;
    int *p = &a;
    cout<< *p ;      it'll print the value of address that is being stored in p
    cout<< p ;      it'll print the address stord in the p
    cot << &p;      it'l prnt the address of p
     
   in the above examle i can see the address is assigned using "&"
   and read the value of address stored in the pointer variable have to use "*" that is
   called as dereference 

   so incase of array no need to use "&" to assign the address to the pointer just directly 
   i can assign the array variable and it'll point to the first element of array 
   and doint +1 to the pointer variable i can acess the next value of the array 
   as i written in the above example

   Double pointer:
    double pointer is use to store the address of a pointer while declaring double pointer
    have to use "**" and to access the data aswell have to use "**"
    it is like i have stored a address of a variable ino a single pointer and hen im storing 
    address of that single pointer into double pointer, i can create n number of pointer connection
    for example:
      int c=10;
      int *q=&c;
      int **r=&q;
*/