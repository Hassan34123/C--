#include <iostream>
#include <string>
#include "Account.h"

using namespace std;
int main()
{
    Account myAccount; // create account object myAccount
    // show that the initial value of my account's name is empty string
    cout << "initial name is :" << myAccount.getName();
    // prompt for and read name
    cout << "\n please enter account name: ";
    string theName;
    getline(cin, theName);
    myAccount.setName(theName);
    // display the name stored in object  myAccount
    cout << "Name in onject myAccount is :" << myAccount.getName() << endl;
}


