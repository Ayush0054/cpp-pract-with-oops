#include<iostream>
    using namespace std;
    class car{
      public:
        string brand;
        int year;
        string model;
    };
    int main(){
    car car1;
    car1.brand="audi";
    car1.model="q6";
    car1.year=2009;
    
    car car2;
    car2.brand="bmw";
    car2.model="x5";
    car2.year=2010;

     cout<<car1.brand<<" "<<car1.model<<" "<<car1.year<<endl;
    cout<<car2.brand<<" "<<car2.model<<" "<<car2.year<<endl;
return 0;
}