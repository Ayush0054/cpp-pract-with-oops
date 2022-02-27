#include<iostream>
    using namespace std;
    class employee{
        private:
        //private attribute
        int salary;
        public:
        //setter
        void setsalary(int s){
            salary =s;
        }
        int getsalary(){
            return salary;
        }
    };
    int main(){
    employee one;
    one.setsalary(125000);
    cout<< one.getsalary();
return 0;
}