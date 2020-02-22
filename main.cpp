//
// Created by Kelly Turner on 2/19/20.
//
#include "makeup.h"
#include "consumer.h"
#include <iostream>
#include <vector>
/*------------GLOBAL FUNCTION DECLARATIONS------------*/
vector<Makeup> shop(Consumer consumer);

void printVec(vector<Makeup> vec);

void cart(vector<Makeup> shoppingList);

int main(){
    //User database of existing accounts:
    vector<Consumer> consumers;
    for(int k=0; k<10; ++k){
        consumers.push_back(Consumer());
    }
    consumers.push_back(Consumer("Bob", "Dylan", "123", 3435657878, "bDyls@bths.edu"));
    cout << "Welcome to Generic Makeup Online Store!" << endl;
    string first, last, pw;
    cout << "Enter your first name (case sensitive): " << endl;
    cin >> first;
    cout << "Now enter your last name: " << endl;
    cin >> last;
    cout << "Enter your password: " << endl;
    cin >> pw;
    //if consumer database contains first/last name and pw, "log in" with account and tell user their UID
    int j;
    Consumer current;
    for(j=0; j<consumers.size(); ++j){
        if(consumers[j].getFirstName() == first && consumers[j].getLastName() == last && consumers[j].getPassword() == pw){
            current = consumers[j];
            current.setLog(true);
            cout << "Welcome back, " << first << "! Your unique ID number is: " << current.getUID() << endl;
        }
    }
    //have diff string commands that show: products(can ask for fields), cart(calculate total), check out (add to consumer obj)
    while(current.getLog()){
        cout << "What would you like to do today? Enter: 'Shop' 'Cart' or 'Checkout'." <<endl;
        string response;
        cin >> response;
        vector<Makeup> m;
        if(response == "Shop"){
            cout << "shopping in progress" << endl;
            m = shop(current);
        }
        if(response == "Cart"){
            cout << "looking at cart" << endl;
            cart(m);
        }
    }
    return 0;
}
/*------------GLOBAL FUNCTION DEFINITIONS------------*/
void printVec(vector<Makeup> vec){
    for(Makeup i : vec){
        cout << i << endl;
    }
    cout << endl;
}

void cart(vector<Makeup> &shoppingList){
    vector<Makeup> cart;
    for(Makeup i : shoppingList){
        cart.push_back(i);
    }
    printVec(cart);
}

vector<Makeup> shop(Consumer consumer) {
    //vector of shade names
    vector<string> shades = {"red", "orange", "yellow", "green", "blue", "violet", "rose", "magenta", "teal", "forest green", "blood orange", "ruby"};
    vector<string> brandNames = {"Morphe", "Tarte", "bareMinerals", "Charlotte Tillbury", "Gucci", "Bite Beauty", "Benefit", "Bobbi Brown", "Hourglass", "NARS", "Pat McGrath", "Kat Von D", "Urban Decay", "Jeffree Starr", "Too Faced", "Sugarpill"};
    //database of makeup that's in stock
    vector<Makeup> stock;
    //Makeup(double pAmount, int pShipment, string pShade, Brand pBrand, double price, double sale, bool isSale);
    stock.push_back(Makeup(5.0, 500, "Azure", Brand("Tarte"), 35.0, 0.0, false));
    for(int j=0; j<100; ++j){
        double amount = (20 - 1) * ( (double)rand() / (double)RAND_MAX ) + 1;
        int shipment = rand()%1000+50;
        string shadeName = shades[rand()%shades.size()];
        double price = (100 - 1) * ( (double)rand() / (double)RAND_MAX ) + 1;
        double sale = (1 - 0) * ( (double)rand() / (double)RAND_MAX ) + 0;
        bool isSale = true;
        if(sale==0.0){isSale = false;}
        int index = rand()%brandNames.size();
        string name = brandNames[index];
        Brand b = Brand(name);

        stock.push_back(Makeup(amount, shipment, shadeName, b, price, sale, isSale));
    }
    //print what the store has:
    cout << "-------------What we are selling-----------" << endl;
    printVec(stock);
    //create a vector that stores what the user adds to their cart
    vector<Makeup> cart;
    cout << "Enter ID of product you want to add to cart" << endl;
    int ID;
    cin >> ID;
    for(Makeup m : stock){
        if(ID == m.getID()){
            cart.push_back(m);
        }
    }
    return cart;
}
