//
// Created by Kelly Turner on 2/15/20.
//

#ifndef KT_PROJECT3_BRAND_H
#define KT_PROJECT3_BRAND_H
using namespace std;
#include <string>
#include <iomanip>
/* Brand class
 * Component class of Makeup class
 * Creates an object that is the brand of a makeup product
 */
class Brand{
private:
    string brandName;
public:
    /*default constructor
     * Requires: nothing
     * Modifies: nothing
     * Effects: Creates Brand object that creates empty string as brand name
     */
    Brand(){
        brandName = "name";
    }
    /* Constructor
     * Requires: string brand name
     * Modifies: nothing
     * Effects: creates Brand object with user-defined brand name
     */
    Brand(string theName){
        brandName = theName;
    }

    //Getter
    string getName();

    //Setter
    void setName(string theName);
};
#endif //KT_PROJECT3_BRAND_H
