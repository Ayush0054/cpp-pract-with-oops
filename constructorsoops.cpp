// #include<iostream>
//     using namespace std;
// class myclass{                      //the class
//     public:                           // acess specifier
//     myclass(){                          //constructor
//         cout<<"hellodost"<<endl;
//     }
// };
//     int main(){
//   myclass myobj;             // create an object of myclass(this will call constructor)

// return 0;
// }

// #include<iostream>
//     using namespace std;
//     class car{        //the class
//         public:   //acess specifier
//         string model;     //attribute
//         string brand;      //attribute
//         int year;          //attribute
//         car(string x,string y, int z){                //constructors with parameter
//             brand =x;
//             model=y;
//             year=z;
//         }
//     };
//     int main(){
//          // Create Car objects and call the constructor with different values
//     car car1("bmw","xs",2003);
//     car car2("audi","qw",2006);

//           // print values
//     cout<<car1.brand<<" "<<car1.model<<" "<<car1.year<<endl;
//      cout<<car2.brand<<" "<<car2.model<<" "<<car2.year<<endl;
// return 0;
// }

#include <iostream>
using namespace std;
class car
{                                   // the class
public:                             // acess specifier
    string model;                   // attribute
    string brand;                   // attribute
    int year;                       // attribute
    car(string x, string y, int z); // constructor declaration
};
// constructor definiton outside the class
car::car(string x, string y, int z)
{
    brand = x;
    model = y;
    year = z;
}
int main()
{
    // Create Car objects and call the constructor with different values
    car car1("bmw", "xs", 2003);
    car car2("audi", "qw", 2006);

    // print values
    cout << car1.brand << " " << car1.model << " " << car1.year << endl;
    cout << car2.brand << " " << car2.model << " " << car2.year << endl;
    return 0;
}