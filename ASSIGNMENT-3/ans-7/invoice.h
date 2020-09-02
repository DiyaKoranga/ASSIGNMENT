#include<iostream>
#include<string.h>
using namespace std;
class Invoice{
private: string pnmbr;
string pdescription;
int qty;
int price;
public:Invoice(string ,string ,int ,int );
void setPnmbr(string );
void setPdescription(string );
void setQty(int );
void setPrice(int );
string getPnmbr();
string getPdescription();
int getQty();
int getPrice();
int getInvoiceAmount();
};

