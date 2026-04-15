#include<iostream>
using namespace std;

int main(){
    // int data type
    int x=10;
    int y=7;
    int age=23;

    //double data type
    double price = 10.77;
    double temperature = 33.33;

    //character datatype
    char a = 'a';
    char s = '$';

    //string datatype
    string name = "vimal";
    string profession = "Software engineer";

    //const its used to avaoid modification of a value in a variable
    const double PI = 3.14;
    const double BIRTH_YEAR = 2002;

    // BIRTH_YEAR = 2007; it'll throw an error

    cout<<"Hi I'm "+name<<endl;
    cout<<"I'm "<<age<<" year old"<<endl;
    cout<<"I'm "+profession;
    system("pause");
    return 0;
}