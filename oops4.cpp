#include<iostream>
    using namespace std;
    class myclass{        // the class
        public:        // acess specifier
        void mymethod(); // method/function declaration

    };

// method/function definition outside the class
    void myclass::mymethod(){
        cout<<"hello dsot"<<endl;
    }
    int main(){
    myclass myobj;  // create an object of myclass
    myobj.mymethod(); //call the method
return 0;
}