#include <iostream>
#include <string>

#include "LibraryAccount.h"
#include "MemberLibraryAccount.h"

using namespace std;

int main() {

    cout << "Program Runs...";

    LibraryAccount person1(123124214, "justin2312324", "justin", "justin@gmail.com", 123424215);
    person1.displayAccountDetails();

    return 0;
}
