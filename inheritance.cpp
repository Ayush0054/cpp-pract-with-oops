// #include<iostream>
//     using namespace std;
//     class vehicle{
//         public: 
//         string brand ="ford";
//         void honk(){
//             cout<<"tuut, tuut !"<<endl;
//         }
//     };
//     // derived class
//     class car : public vehicle{
//      public:
//      string model ="mustang";
//     };
//     class engine : public car{
//         public:
//         string variant="petrol";
//     };
//     int main(){
//     engine mycar;
//     mycar.honk();
//     cout<< mycar.brand <<" "<< mycar.model<<" "<< mycar.variant; 
// return 0;
// }

#include<iostream>
    using namespace std;
    class father{
        public:
        void function1(){
            cout<<" i am father"<<endl;
        }
    };
     class mother{
        public:
        void function2(){
            cout<<" i am mother"<<endl;
        }
    };
    class child : public father,public mother{
        
    };
    int main(){
    child one;
    one.function1();
    one.function2();
return 0;
}