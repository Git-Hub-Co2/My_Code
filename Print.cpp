#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num1 = 520,
    num2 = 1314,
    num3 = 521;

    cout << lift;//Linksbündig
    //cout << setfill(".");
    cout << setw(8) << num1 <<
          setw(8) << num3 <<
          setw(8) << num2 << endl;
    
    return 0;
}