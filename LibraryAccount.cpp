#include <iostream>
#include <string>

#include "LibraryAccount.h"

using namespace std;

//Constructors
LibraryAccount::LibraryAccount() {

}

LibraryAccount::LibraryAccount(int userID, std::string userPassword, std::string name, std::string email,
                               int phoneNumber) {
    this->userID = userID;
    this->userPassword = userPassword;
    this->name = name;
    this->email = email;
    this->phoneNumber = phoneNumber;
    this->accountType = "Member User";
}

//Accessors
int LibraryAccount::getUserID() const {
    return userID;
}

string LibraryAccount::getName() const {
    return name;
}

string LibraryAccount::getEmail() const {
    return email;
}

int LibraryAccount::getPhoneNumber() const {
    return phoneNumber;
}

string LibraryAccount::getAccountType() const {
    return accountType;
}

//Mutators
void LibraryAccount::setUserID() {

}
void LibraryAccount::setName() {

}
void LibraryAccount::setEmail() {

}
void LibraryAccount::setPhoneNumber() {

}
void LibraryAccount::setAccountType() {

}

//Methods
void LibraryAccount::displayAccountDetails() {
    cout << endl;
    cout << "User ID: " << userID << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Account Type: " << accountType << endl;
}


