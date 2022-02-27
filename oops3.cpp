#include <iostream>
using namespace std;

class MyClass {         // The class
  public:               // Access specifier
  int i;
  int* j;
    void myMethod(int i,int * j) {   // Method/function
    j = &i;
      cout<<i<<endl;
      cout<<*j<<endl;
      cout<<j<<endl;
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.i=45;
  myObj.myMethod(myObj.i,myObj.j);  // Call the method
  return 0;
}



