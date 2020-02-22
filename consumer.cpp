//
// Created by Kelly Turner on 2/14/20.
//
#include "consumer.h"
int Consumer::uniqueID = 0;
Consumer::Consumer(){
    firstName = "Rupaul";
    lastName = "Charles";
    password = "thePassword9090";
    ID = uniqueID;
    loggedIn = false;
    uniqueID++;
    cardNum = 122345546889;
    email = "watchDragRace@vh1.com";
}
Consumer::Consumer(string pFirst, string pLast, string thePassword, long pCard, string pEmail){
    firstName = pFirst;
    lastName = pLast;
    password = thePassword;
    loggedIn = false;
    uniqueID++;
    cardNum = pCard;
    email = pEmail;
}
/* Getters
 * Requires: nothing
 * Modifies: nothing
 * Effect: retrieves certain field of consumer obj
 */
string Consumer::getFirstName(){
    return firstName;
}
string Consumer::getLastName(){
    return lastName;
}
string Consumer::getPassword(){
    return password;
}
bool Consumer::getLog(){
    return loggedIn;
}
int Consumer::getUID(){
    return ID;
}
long Consumer::getCardNum(){
    return cardNum;
}
string Consumer::getEmail(){
    return email;
}

/* Setters
 * Requires: param of field to be set
 * Modifies: field being set
 * Effect: nothing
 */
void Consumer::setFirst(string theFirst){
    firstName = theFirst;
}
void Consumer::setLast(string theLast){
    lastName = theLast;
}
void Consumer::setPassword(string thePW) {
    password = thePW;
}
void Consumer::setLog(bool log) {
    loggedIn = log;
}
void Consumer::setUID(int uid){
    uniqueID = uid;
}
void Consumer::setCardNum(long theCard){
    int digits = 0;
    //count digits of entered card number
    while (theCard != 0){
        theCard = theCard / 10;
        ++digits;
    }
    //if less than required length, add digits until it is 16 digits
    if(digits != 16){
        while(digits < 16){
            stoi(to_string(theCard)+"1");
            ++digits;
        }
    }
    //if more than required length, take away digits until it is 16 digits
    if(digits > 16){
        stoi(to_string(theCard).substr(0, 16));
    }
}
void Consumer::setEmail(string theEmail){
    email = theEmail;
}
