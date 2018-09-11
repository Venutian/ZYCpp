#include <iostream>
#include <cstdlib>   // Enables use of rand()
#include <ctime>     // Enables use of time()
using namespace std;

int main() {
   int seedVal;

   seedVal = 4;
   srand(seedVal);

   cout << (rand () % 50)+100 << endl;
   cout << (rand () % 50)+100 << endl;

   return 0;
}