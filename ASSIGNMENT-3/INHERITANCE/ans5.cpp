
#include <iostream>
using namespace std;
class Shinchan
{
public:
int shiro;
};
class Himawari: public Shinchan
{
public:
Himawari(){
shiro = 10;
}
};
class Misae
{
public:
int Harry;
Misae()
{
Harry=77;
}
};
class Ichan: public Himawari, public Misae //HYBRID INHERITANCE
{
public:
void mul()
{
cout  << shiro*Harry<<endl;
}
};
int main()
{ Ichan o1;
o1.mul();
return 0;}
