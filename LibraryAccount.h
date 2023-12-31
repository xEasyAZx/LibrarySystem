#include <iostream>
#include <string>

using namespace std;

#ifndef LIBRARYSYSTEM_LIBRARYACCOUNT_H
#define LIBRARYSYSTEM_LIBRARYACCOUNT_H


class LibraryAccount {
    //Attributes
protected:
    int userID;
    string userPassword;
    string name;
    string email;
    int phoneNumber;
    string accountType; //Set to Member User By Default

public:
    //Constructor
    LibraryAccount(int userID, string userPassword, string name, string email, int phoneNumber);

    //Accessors
    int getUserID() const;
    string getName() const;
    string getEmail() const;
    int getPhoneNumber() const;
    string getAccountType() const;

    //Mutators
    void setUserID();
    void setName();
    void setEmail();
    void setPhoneNumber();
    void setAccountType();

    //Methods
    void displayAccountDetails();

};


#endif //LIBRARYSYSTEM_LIBRARYACCOUNT_H
