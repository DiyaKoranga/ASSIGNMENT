#include<iostream>
#include"invoice.h"
#include<string.h>
using namespace std;
int main()
{
    Invoice o1("AK4567","Very important and useful part ",4,5000);
    cout<<"The Part number is "<<o1.getPnmbr()<<endl;
    cout<<"The Part description is "<<o1.getPdescription()<<endl;
    cout<<"Number of parts are "<<o1.getQty()<<endl;
    cout<<"The Price per item is "<<o1.getPrice()<<" rupees"<<endl;
    cout<<"The total amount of the parts are "<<o1.getInvoiceAmount()<<" rupees"<<endl;
    //for testing negative price and qty
    Invoice o2( "SHIRO4567","Essential part ",-10,-78955);
    cout<<"The Part number is "<<o2.getPnmbr()<<endl;
    cout<<"The Part description is "<<o2.getPdescription()<<endl;
    cout<<"Number of parts are "<<o2.getQty()<<endl;
    cout<<"The Price per item is "<<o2.getPrice()<<" rupees"<<endl;
    cout<<"The total amount of the parts are "<<o2.getInvoiceAmount()<<" rupees"<<endl;

}
