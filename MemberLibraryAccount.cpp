#include <iostream>
#include <string>

#include "LibraryAccount.h"
#include "MemberLibraryAccount.h"

using namespace std;

MemberLibraryAccount::MemberLibraryAccount() {

}

MemberLibraryAccount::MemberLibraryAccount(int userID, std::string userPassword, std::string name, std::string email,
                                           int phoneNumber) {
    this->userID = userID;
    this->userPassword = userPassword;
    this->name = name;
    this->email = email;
    this->phoneNumber = phoneNumber;
}

void MemberLibraryAccount::transactionHistory() {

}

