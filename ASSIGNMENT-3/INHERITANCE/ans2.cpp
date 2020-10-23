#include<iostream>
using namespace std;
class Student {
public:
void College() {
cout << "i study in GEU Dehradun" << endl;
}
};
class UndergraduateStudent: public Student {
public:
void Sem() {
cout << "I am in 3rd Semester" << endl;
}
};
class Freshman: public UndergraduateStudent {
public:
void Fresher() {
cout << "Freshers enjoys alot  at induction program" << endl;
}
};
class Campus: public UndergraduateStudent {
public:
void geucampus() {
cout << "The campus of our college is very beautiful" << endl;
}
};
class GraduateStudent: public Student {
public:
void gs()
{
cout << "The graduating student will be given farewell by their juniors" << endl;
}
};
class MastersStudent : public GraduateStudent {
public:
void Ms() {
cout << "They are very intelligent studentss" << endl;
}
};
class DoctoralStudent : public MastersStudent {
public:
void Dr() {
cout << "They do researches " << endl;
}
};


int main() {
    UndergraduateStudent o1;

     o1.Sem();
     Freshman o2;
     o2.College();
     o2.Fresher();
     DoctoralStudent d;
    d.Ms();
     d.Dr();
}
