#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Intialization of vector
    vector<int>v; //here vector is created with no value inside it
  //  cout<<v[0]<<endl; //error

    vector<int>v2={1,2,3}; //here vector is created with 3 values inside it
    cout<<v2[2]<<endl;

    vector<int>v3(3,1); //here vector is crated with size of 3 and in each index 0 is stored
    cout<<v3[0]<<v3[1]<<v3[2]<<endl;


    return 0;
}

/*
vector<data_type>

  vector is a dynamic data structure using which i can store any
  number of elements.
  here wheen i created a vector the vector variable is stored in 
  stack memory but thee values are stored in the heap memory
  because heap memory supports dynamic memory management

*/