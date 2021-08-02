#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float numFloat = 10/ 3.0f;
    double numDouble = 10 / 3.0f;
    cout << fixed;
    cout << "numFloart = " << numFloat * 100000000 << endl;
    cout << "numDouble = " << numDouble * 100000000 << endl;
    cin.get();

}