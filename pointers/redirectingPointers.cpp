#include<iostream>
using namespace std;

void changeValue(int* p){
    *p =20;
}

void redirectPointer(int* p){
    int b=77;
    p=&b;
}
void redirectPointerDanglingissue(int** p){
    int b=77;
    *p=&b;
}
void redirectPointer(int** p){
    int* b= new int(77);
    *p=b;
}
int main(){
    int a=10;
    int* p=&a;

    //example 1
    changeValue(p);
    cout<<a;
    cout<<endl;

    //eample 2
    redirectPointer(p);
    cout<<"Trying to redirect the pointer to different value: "<<*p<<endl;
    cout<<endl;
    
    //example 3
    redirectPointerDanglingissue(&p);
    cout<<"Trying to redirect the pointer to different value it causes dangling pointer issue: "<<*p<<endl;
    cout<<endl;

    //example 4
    redirectPointer(&p);
    cout<<"successfully redirecting pointer: "<<*p;

    delete p;
    p=nullptr;
}


// so redirecting pointer means, making the pointer to point to different value or memory location
/*
    so in example 1 one I'm just changing the value of a pointer through a single pointer.

    in example 2:
        here im just passing the value which is a pointer is holding on, so it's like a copy of value
        i'm passing to a function, so here actually the pointer changes or redirected to different 
        value ony within that function it's like temporary or copy pointer, until the function goes
        out of scope.
        
    in exmple 3:
        In order to change the address which is hold by a pointer or to redirect a pointer from
        external function , first I need to pass the address of that pointer then only it's 
        possible.
        but in this example one issue is there, here im redirecting the pointer with a addresss of a
        value which is stored in stack memory, so when the function goes out of scope that particular
        value gets destroyed but address is there , but the address will start poining to some
        garbage value, so the actual pointer is redirected to garbage value, this issue is called
        "Dangling pointer".
    
    in example 4:
        so to avoid dangling pointer issue, there's a solution, instead of storing the value in 
        stack memory I can store it in heap memory. he "new" keyword will create a meory in heap
        for example
            int* a =new int(10);
        here, ive assigned a value in heap memory and assigned to a pointer "a".

        here one more thing have to be noted, whenever I create a value inside a heap memory 
        have to destroy it manually or else memory leak will happen untill the program gets 
        terminated.
        example:
            destroy a;
            *a=nullptr;  // it's better practice to add nullptr if a pointer is no use to avoid
                            dangling issue
        
        so, for every "new" there should be respective "destroy" for array "new[]" - "destry[]"
        if no, then ther'll be crashes or other issues in the program.

        

*/