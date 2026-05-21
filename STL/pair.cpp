#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    pair<int,int> p={1,2};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    cout<<endl;

    pair<int,pair<int,int>>p2={1,{2,3}};
    cout<<p2.first<<endl;
    cout<<p2.second.first<<endl;
    cout<<p2.second.second<<endl;
    cout<<endl;

    pair<int,pair<int,pair<int,int>>> p3 = {1,{2,{3,4}}};
    cout<<p3.first<<endl;
    cout<<p3.second.first<<endl;
    cout<<p3.second.second.first<<endl;
    cout<<p3.second.second.second<<endl;
    return 0;
}


/*
pair<data_type, data_type>
  
  a pair is used to store two data within single varaible
  that i can see in above example.
  In pair i can storee nested pair as well but the thing is
  first data should be single item and in place of second data
  i can add one more pair as shown in the above example.


*/