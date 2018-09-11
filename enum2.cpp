#include <iostream>
using namespace std;

int main() {
   enum AcceptedCoins {ADD_QUARTER, ADD_DIME, ADD_NICKEL, ADD_UNKNOWN};
   int totalDeposit;
   int userInput;

   totalDeposit = 0;

   cout << "Add coin: 0 (add 25), 1 (add 10), 2 (add 5).  ";
   cin >> userInput;

   if (userInput == ADD_QUARTER) {
      totalDeposit = totalDeposit + 25;
   }

   if (userInput == ADD_DIME) {
      totalDeposit = totalDeposit + 10;
   }
   if (userInput == ADD_NICKEL) {
      totalDeposit = totalDeposit + 5;
   }


   else {
      cout << "Invalid coin selection." << endl;
   }

   cout << "totalDeposit: " << totalDeposit << endl;

   return 0;
}