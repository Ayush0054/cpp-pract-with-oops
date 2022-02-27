#include<iostream>
    using namespace std;
    class myclass {             //the class
    public:                     //acess specifier 
    int mynum;                  // Attribute (int variable)
    string mystring;            // Attribute (string variable)
};
    int main(){
    myclass myobj;              // create an object of myclass

    // acess attributes and set values
    myobj.mynum=15;
    myobj.mystring="ayush jha";

   // print attribute values
    cout<<myobj.mynum<<endl;
    cout<<myobj.mystring<<endl;
return 0;
}