#include<iostream>
#include<string.h>
using namespace std;
class Invoice{
private: string pnmbr;
string pdescription;
int qty;
int price;
public:Invoice(string n,string d,int q,int p){
pnmbr=n;
pdescription=d;
qty=q;
price=p;
if(q>0){qty=q;}
else{cout<<"ERROR: invalid qty "<<endl;
     qty=0;}
    if(p>0){price=p;}
else{cout<<"ERROR: invalid price "<<endl;
     price=0;}
     }
void setPnmbr(string a){
pnmbr=a;}
void setPdescription(string b){
pdescription=b;}
void setQty(int c){
     qty=c;}
void setPrice(int d){
    price=d;
}
string getPnmbr(){
return pnmbr;}
string getPdescription(){
return pdescription;}
int getQty(){
return qty;}
int getPrice(){

return price;}
int getInvoiceAmount(){
    int amt;
    amt=qty*price;
    return amt;
}
};
