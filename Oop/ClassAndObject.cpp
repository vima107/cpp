#include<iostream>
#include<string>
using namespace std;

class Bank{
private:          
    int balance = 66666;
    string password = "vima";

public:
    string username = "vimal kumar";
    string accountNumber = "CB010203444";

    string getUserDetrail(){
        return "name = "+username+" and account number is = "+accountNumber;
    }

    int getBalance(string accountNumber, string password){
        if(accountNumber == this->accountNumber && password == this->password){
            return this->balance;
        }
        return -1;
    }
};

int main(){
    Bank b;
    cout<< b.getUserDetrail()<<endl;
    cout<< b.getBalance("CB010203444","vima");
}

// topics-> "Class" , "Object" , "Access modifiers" , "Encapsulation"

/*
Class:
    So class is a blue print of an object so based on class i can create any number of objects.

Object:
    Object is an instacance of a class, so every object contains the variable and methods that is defined
    in a class

Access modiferies: "public", "private", "protected"
    So in class i can make any variable or method at what level it should be accessible outside the class.
    so by default if i don't give any access modifier then "private" will be considered.

    private: if i use private access modifier , i cana't able access or use that particular variable or method
             outside the class.
    public: if i use public access modifier it will be accessed anywhere outside the class.
    protected: if i use protected then it can be accessed by deireved class as well.

Encasulation:
    so encapsulation is one of a key concept of object oriented programming, so here we are binding the variable 
    and method into a single unit by making it as private and providing protection.
    in this case to access those variable and method i can create or make use of getter() or setter() methods.

*/