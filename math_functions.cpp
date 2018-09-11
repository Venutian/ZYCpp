#include <iostream>
#include <cmath>
using namespace std;

int main( ) {
   double treeHeight;
   double shadowLength;
   double angleElevation;

   angleElevation = 0.11693706; // 0.11693706 radians = 6.7 degrees
   shadowLength   = 17.5;

    treeHeight = shadowLength * tan(angleElevation);

   cout << "Tree height: " << treeHeight << endl;

   return 0;
}