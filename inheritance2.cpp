//acess specifier

#include<iostream>
    using namespace std;
    class employee{
        protected:
        int salary;
    };
    class programmer: public employee{
        public:
        int bonus;
        void setSalary(int s){
            salary=s;
        }
        int getSalary() {
            return salary;
        }
    };
    int main(){
    programmer one;
    one.setSalary(50000);
    one.bonus =15000;
    cout<<"salary :"<<one.getSalary()<<endl;
    cout<<"bonus :"<<one.bonus<<endl;
return 0;
}