//
// Created by Kelly Turner on 2/14/20.
//

#ifndef KT_PROJECT3_MAKEUP_H
#define KT_PROJECT3_MAKEUP_H

#include <string>
#include "brand.h"
#include <iomanip>
/* Makeup class
 * base/parent class of project
 * creates a makeup object that a user can purchase/a company sells
 */
using namespace std;
class Makeup{
protected:
    static int uniqueID;
    int ID;
    double amountPkg;
    int shipmentQuantity;
    string shade;
    Brand brand;
    double price;
    double sale;
    bool isSale;
public:
    /* Default constructor
     * Requires: nothing
     * Modifies: nothing
     * Effect: makes Makeup object
     */
    Makeup();
    /* constructor
     * Requires: double amount, int shipment quantity, string shade name, string brand, int exp date
     * Modifies: nothing
     * Effect: makes Makeup object
     */
    Makeup(double pAmount, int pShipment, string pShade, Brand pBrand, double price, double sale, bool isSale);

    /* Getters
     * Requires: nothing
     * Modifies: nothing
     * Effect: retrieves certain field of makeup obj
     */
    int getID();
    double getPkgAmount();
    int getShipmentQuantity();
    string getShadeName();
    Brand getBrand();
    double getPrice();
    double getSale();
    bool getSaleState();

    /* Setters
     * Requires: param of field to be set
     * Modifies: field being set
     * Effect: nothing
     */
    void setUID(int uid);
    void setPkgAmount(double pkgAmount);
    void setShipmentQuantity(int shipQuantity);
    void setShade(string shadeName);
    void setBrand(string brandName);
    void setPrice(double thePrice);
    void setSale(double theSale);
    void setSaleState(bool theSaleState);

    //overloaded << operator to print out Makeup objects
    friend ostream& operator << (ostream& outs, Makeup &m) {
        outs << setw(5) << m.getID();
        outs << setw(10) << m.getPkgAmount();
        outs << setw(5) << m.getShipmentQuantity();
        outs << setw(26) << m.getShadeName();
        outs << setw(15) << m.getBrand().getName(); //prints name of Brand object
        outs << setw(10) << m.getPrice();
        outs << setw(5) << m.getSale();
        outs << setw(5) << m.getSaleState();
        //return something since not void
        return outs;
    }

};
#endif //KT_PROJECT3_MAKEUP_H
