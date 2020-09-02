#include<iostream>
#include"invoice.h"
using namespace std;

Invoice::Invoice(string n,string d,int q,int p){
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
void Invoice::setPnmbr(string a){
pnmbr=a;}
void Invoice::setPdescription(string b){
pdescription=b;}
void Invoice::setQty(int c){
     qty=c;}
void Invoice::setPrice(int d){
    price=d;
}
string Invoice::getPnmbr(){
return pnmbr;}
string Invoice::getPdescription(){
return pdescription;}
int Invoice::getQty(){
return qty;}
int Invoice::getPrice(){

return price;}
int Invoice::getInvoiceAmount(){
    int amt;
    amt=qty*price;
    return amt;
}


