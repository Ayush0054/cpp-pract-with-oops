#include<iostream>
using namespace std;
 void calculator(int num1, int num2,char func){
    if(func== '+'){
     cout<<"sum = "<<num1 + num2<<endl;
    }
     else if(func== '-'){
     cout<<"subtraction = "<<num1 - num2<<endl;
    }
       else if(func== '*'){
     cout<<"multiplication = "<<num1 * num2<<endl;
    }
       else if(func== '/'){
     cout<<"division = "<<num1 / num2<<endl;
    }
return;
 }
int main(){
 int a,b;
 char operation;
 cout<<"enter two number"<<endl;
 cin>>a;
 cin>>b;
 cout<<"choose operation"<<endl;
 cin>>operation;
  calculator(a,b,operation);



    return 0;
}