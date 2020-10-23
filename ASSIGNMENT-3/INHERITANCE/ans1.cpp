#include<iostream>
using namespace std;
class Car{
public:
void CarModel(){
cout << "Mercedes" <<endl;
}
};
class CarColor:public Car{
public:
void Clr(){
cout << "Black in color " << endl;
}
};
int main() {
CarColor o1;
o1.Clr();
o1.CarModel();
}
