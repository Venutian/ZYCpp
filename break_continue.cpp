#include <iostream>
#include <string>
using namespace std;

int main() {
   string simonPattern;
   string userPattern;
   int userScore;
   int i;

   userScore = 0;
   simonPattern = "RRGBRYYBGY";
   userPattern  = "RRGBBRYBGY";

   for(i = 0; i <= simonPattern.size(); i++){
		if(userPattern.at(i) == simonPattern.at(i)){
			userScore++;
		}
		else{
			break;
		}
	}

   cout << "userScore: " << userScore << endl;

   return 0;
}