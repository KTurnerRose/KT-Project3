//
// Created by Kelly Turner on 2/15/20.
//
#include "foundation.h"

//constructor
Foundation::Foundation(string pSkin, string pType, bool pFullCov) :Makeup(){
    skinType = pSkin;
    type = pType;
    isFullCoverage = pFullCov;
}
//constructor
Foundation::Foundation(double pAmount, int pShipment, string pShade, Brand pBrand, double thePrice, double theSale,
                       bool theSaleState) : Makeup(pAmount, pShipment, pShade, pBrand, thePrice, theSale, theSaleState) {
    amountPkg = pAmount;
    shipmentQuantity = pShipment;
    shade = pShade;
    brand = pBrand;
    price = thePrice;
    sale = theSale;
    isSale = theSaleState;
}
//Getters
string Foundation::getSkinType(){
    return skinType;
}
string Foundation::getProductType(){
    return type;
}
bool Foundation::getFullCov(){
    return isFullCoverage;
}

//Setters
void Foundation::setSkinType(string pSkin){
    skinType = pSkin;
}
void Foundation::setProductType(string pType){
    type = pType;
}
void Foundation::setFullCov(bool isFull){
    isFullCoverage = isFull;
}


