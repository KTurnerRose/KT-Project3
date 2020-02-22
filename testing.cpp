//
// Created by Kelly Turner on 2/21/20.
//
#include "makeup.h"
#include "consumer.h"
#include "foundation.h"
#include <iostream>
using namespace std;
//test Makeup class
bool pkgAmountTestHelper(Makeup m, double pkg, double ePkg){
    m.setPkgAmount(pkg);
    return m.getPkgAmount() == ePkg;
}
bool priceTestHelper(Makeup m, double p, double ePrice){
    m.setPrice(p);
    return m.getPrice() == ePrice;
}
bool saleTestHelper(Makeup m, double s, double eSale){
    m.setSale(s);
    return m.getSale() == eSale;
}
bool pkgAmountTest(){
    Makeup m;
    return (pkgAmountTestHelper(m, 15.5, 15.5)
            && pkgAmountTestHelper(m, -5.6, 5.6));
}
bool priceTest(){
    Makeup m;
    return (priceTestHelper(m, 44.4, 44.4)
    &&priceTestHelper(m, -44.4, 44.4)
    && priceTestHelper(m, 0, 1));
}
bool saleTest(){
    Makeup m;
    return (saleTestHelper(m, 16.7, 0.0)
    && saleTestHelper(m, 1.0, 0.0)
    && saleTestHelper(m, 0.0, 0.0)
    && saleTestHelper(m, -45.0, 0.0));
}

//test Foundation class
bool fullCovTestHelper(Foundation f, bool isFull, bool eFull){
    f.setFullCov(isFull);
    return f.getFullCov() == eFull;
}
bool fullCovTest(){
    Brand b;
    Foundation f = Foundation(0.0, 0, "", b, 0.0,
            0.0, false);
    return (fullCovTestHelper(f, true, true) && fullCovTestHelper(f, false, false));
}
//consumer test
bool cardNumTestHelper(Consumer c, long card, long eCard){
    c.setCardNum(card);
    return c.getCardNum() == eCard;
}
bool cardNumTest(){
    Consumer c;
    return (cardNumTestHelper(c, 1111222233334444, 1111222233334444)
    && cardNumTestHelper(c, 111, 1111111111111111)
    && cardNumTestHelper(c, 0, 011111111111111)
    && cardNumTestHelper(c, 123789657849376890, 1237896578493768));
}
bool logTestHelper(Consumer c, bool isLoggedOn, bool eLog){
    c.setLog(isLoggedOn);
    return c.getLog() == eLog;
}
bool logTest(){
    Consumer c;
    return (logTestHelper(c, true, true) && logTestHelper(c, false, false));
}
//Brand test
bool nameTestHelper(Brand b, string theName, string eName){
    b.setName(theName);
    return b.getName() == eName;

}
bool nameTest(){
    Brand b;
    return (nameTestHelper(b, "Morphe", "Morphe")
    && nameTestHelper(b, "", ""));
}
int main(){
    //makeup test
    if(pkgAmountTest()){
        cout << "passed package amount test"<<endl;
    }
    else{
        cout << "failed package amount test" << endl;
    }

    if(priceTest()){
        cout << "passed price test" << endl;
    }
    else{
        cout << "failed price test" << endl;
    }

    if(saleTest()){
        cout << "passed sale test" << endl;
    }
    else{
        cout << "failed sale test" << endl;
    }

    //foundation test
    if(fullCovTest()){
        cout << "passed full coverage test" << endl;
    }
    else{
        cout << "failed full coverage test" << endl;
    }

    //consumer test
    if(cardNumTest()){
        cout << "passed card num test" << endl;
    }
    else{
        cout << "failed card num test" << endl;
    }
    if(logTest()){
        cout << "passed log test" << endl;
    }
    else{
        cout << "failed log test" << endl;
    }
    //Brand test
    if(nameTest()){
        cout << "passed name test" << endl;
    }
    else{
        cout << "failed name test" << endl;
    }
    return 0;
};
