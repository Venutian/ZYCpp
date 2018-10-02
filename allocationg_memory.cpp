#include <iostream>
using namespace std;

int main()
{
    double *houseHeight = nullptr;
    houseHeight = new double;
    *houseHeight = 23;
    cout << "houseHeight is " << *houseHeight;

    delete houseHeight;

    return 0;
}