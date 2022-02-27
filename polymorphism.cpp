// #include<iostream>
//     using namespace std;
//     class maruti{
//         public:
//        void price(){
//            cout<<"the price of the car is : "<<endl;
//        }
//     };
//     class baleno : public maruti{
//         public:
//         void price(){
//            cout<<"750,000"<<endl;
//         }
//     };
//     class alto : public maruti{
//         public:
//         void price(){
//             cout<<"400,000"<<endl;
//         }
//     };
//     int main(){
//     maruti model;
//     baleno first;
//     alto second;

//     model.price();
//     first.price();
//     second.price();
// return 0;
// }

//user input

#include<iostream>
    using namespace std;
    class maruti{
        public:
       void price(){
           cout<<"the price of the car is : "<<endl;
       }
    };
    class baleno : public maruti{
        public:
        void price(){
           int n;
           cout<<"enter the price"<<endl;
           cin>>n;
        }
    };
    class alto : public maruti{
        public:
        void price(){
            int n;
           cout<<"enter the price"<<endl;
           cin>>n;         
        }
    };
    int main(){
    maruti model;
    baleno first;
    alto second;

    model.price();
    first.price();
    second.price();
return 0;
}