#include <iostream>
#include <string>

using namespace std;

#ifndef LIBRARYSYSTEM_LIBRARYACCOUNT_H
#define LIBRARYSYSTEM_LIBRARYACCOUNT_H


class LibraryAccount {
    //Attributes
    int userID;
    string userPassword;
    string name;
    string email;
    int phoneNumber;
    string accountType;

    //Constructor
    LibraryAccount();
    LibraryAccount(int userID, string userPassword, string name, string email, int phoneNumber, string accountType);

    //Accessors
    int getUserID();
    string getName();
    string getEmail();
    int getPhoneNumber();
    string getAccountType();

    //Mutators
    void setUserID();
    void setName();
    void setEmail();
    void setPhoneNumber();
    string setAccountType();

    //Methods
    void displayAccountDetails();

};


#endif //LIBRARYSYSTEM_LIBRARYACCOUNT_H
