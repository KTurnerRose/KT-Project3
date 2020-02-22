//
// Created by Kelly Turner on 2/14/20.
//

#ifndef KT_PROJECT3_CONSUMER_H
#define KT_PROJECT3_CONSUMER_H
#include <string>
/* Consumer class
 * unrelated class to Makeup class
 * creates a user account on the store database
 */
using namespace std;
class Consumer{
private:
    string firstName;
    string lastName;
    string password;
    static int uniqueID;
    int ID;
    bool loggedIn;
    long cardNum;
    string email;

public:
    /*constructors
     * Requires: nothing
     * Modifies: nothing
     * Effects: Creates consumer object
     */
    Consumer();
    /* Constructor
     * Requires: string first and last names, string password, long card number, string email
     * Modifies: nothing
     * Effects: creates Consumer objects
     */
    Consumer(string pFirst, string pLast, string thePassword, long pCard, string pEmail);

    /* Getters
     * Requires: nothing
     * Modifies: nothing
     * Effect: retrieves certain field of consumer obj
     */
    string getFirstName();
    string getLastName();
    string getPassword();
    bool getLog();
    int getUID();
    long getCardNum();
    string getEmail();

    /* Setters
     * Requires: param of field to be set
     * Modifies: field being set
     * Effect: nothing
     */
    void setFirst(string theFirst);
    void setLast(string theLast);
    void setPassword(string thePW);
    void setLog(bool log);
    void setUID(int uid);
    void setCardNum(long theCard);
    void setEmail(string theEmail);

    //non trivial functions


};
#endif //KT_PROJECT3_CONSUMER_H
