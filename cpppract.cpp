#include<iostream>
    using namespace std;
    
    int main(){
    string food ="pizza";
    string &snacks = food;
    cout<< food<<endl;
    cout<< snacks<<endl;
    cout<< &food;
return 0;
}