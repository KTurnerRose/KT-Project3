//
// Created by Kelly Turner on 2/14/20.
//
#include "makeup.h"

#include <utility>

//constructors
Makeup::Makeup(){
    ID = uniqueID;
    uniqueID++;
    amountPkg = 0.0;
    shipmentQuantity = 0;
    shade = "";
    brand = Brand("");
    sale = 0.0;
    isSale = false;
}
Makeup::Makeup(double pAmount, int pShipment, string pShade, Brand pBrand, double thePrice, double pSale, bool pIsSale){
    uniqueID++;
    ID = 0;
    amountPkg = pAmount;
    shipmentQuantity = pShipment;
    shade = std::move(pShade);
    brand = std::move(pBrand);
    price = thePrice;
    sale = pSale;
    isSale = pIsSale;
}


//getters
int Makeup::getID(){
    return ID;
}
double Makeup::getPkgAmount(){
    return amountPkg;
}
int Makeup::getShipmentQuantity(){
    return shipmentQuantity;
}
string Makeup::getShadeName(){
    return shade;
}
Brand Makeup::getBrand(){
    return brand;
}
double Makeup::getPrice(){
    if(isSale){
        return price*sale;
    }
    return price;
}
double Makeup::getSale(){
    return sale;
}
bool Makeup::getSaleState() {
    return isSale;
}


//setters
void Makeup::setUID(int uid){
    uniqueID = uid;
}
void Makeup::setPkgAmount(double thePkgAmount){
    amountPkg = thePkgAmount;
}
void Makeup::setShipmentQuantity(int theShipQuantity){
    shipmentQuantity = theShipQuantity;
}
void Makeup::setShade(string theShadeName){
    shade = std::move(theShadeName);
}
void Makeup::setBrand(string theBrandName){
    brand = std::move(theBrandName);
}
void Makeup::setPrice(double thePrice){
    if(thePrice == 0){
        price = 1;
    }
    if(thePrice < 0){
        price = 0 - thePrice;
    }
    price = thePrice;
}
void Makeup::setSale(double theSale) {
    if(theSale >= 1 || theSale < 0) {
        sale = 0.0;
    }
    sale = theSale;
}

void Makeup::setSaleState(bool theSaleState) {
    isSale = theSaleState;
}


