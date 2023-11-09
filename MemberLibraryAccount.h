#include <iostream>
#include <string>
#include "LibraryAccount.h"

using namespace std;

#ifndef LIBRARYSYSTEM_MEMBERLIBRARYACCOUNT_H
#define LIBRARYSYSTEM_MEMBERLIBRARYACCOUNT_H


class MemberLibraryAccount: public LibraryAccount{
private:
protected:
public:
    MemberLibraryAccount();
    MemberLibraryAccount(int userID, string userPassword, string name, string email, int phoneNumber);

    void transactionHistory();

};

#endif //LIBRARYSYSTEM_MEMBERLIBRARYACCOUNT_H
