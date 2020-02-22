//
// Created by Kelly Turner on 2/15/20.
//

#ifndef KT_PROJECT3_FOUNDATION_H
#define KT_PROJECT3_FOUNDATION_H
#include "makeup.h"
/* Foundation class
 * child class to Makeup class
 * Specifies a makeup object as a foundation type, adds characteristics unique to foundation
 */
class Foundation : public Makeup{
private:
    string skinType;
    string type;
    bool isFullCoverage;
public:
    //constructor
    Foundation(double pAmount, int pShipment, string pShade, Brand pBrand, double price,
               double sale, bool isSale);
    Foundation(string pSkin, string pType, bool pFullCov);

    /* Getters
     * Requires: nothing
     * Modifies: nothing
     * Effect: retrieves certain field of foundation obj
     */
    string getSkinType();
    string getProductType();
    bool getFullCov();

    /* Setters
     * Requires: param of field to be set
     * Modifies: field being set
     * Effect: nothing
     */
    void setSkinType(string pSkin);
    void setProductType(string pType);
    void setFullCov(bool isFull);

};
#endif //KT_PROJECT3_FOUNDATION_H
