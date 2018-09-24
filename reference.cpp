#include <iostream>
using namespace std;

void CoordTransform(int xVal, int yVal, int &xValNew, int &yValNew){
	xValNew = (xVal + 1) * 2;
	yValNew = (yVal + 1) * 2;
}

int main() {
   int xValNew;
   int yValNew;

   CoordTransform(3, 4, xValNew, yValNew);
   cout << "(3, 4) becomes " << "(" << xValNew << ", " << yValNew << ")" << endl;

   return 0;
}