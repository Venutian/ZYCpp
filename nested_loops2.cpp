#include <iostream>
using namespace std;

int main() {
   int numRows = 2;
   int numCols = 3;

   // Note: You'll need to declare more variables
   int k = 1;
	for(int i = 0; i < numRows; i++){
		char letter = 'A';

		for(int j = 0; j < numCols; j++){
			cout << k << letter << " ";
			letter++;
		}
		k ++;
	}

   cout << endl;

   return 0;
}