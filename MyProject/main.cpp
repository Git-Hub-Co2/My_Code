#include <iostream>
#include "swap.h"

using namespace std;

int main (int arg, char **argv)
{
    int val1 = 10;
    int val2 = 20;

    cout << "Before swap: " << endl;
    cout << "Val1 = " << val1 << endl;
    cout << "Val2 = " << val2 << endl;
    swap(val1,val2);
    cout << "After swap: " << endl;
    
    
    return 0;
}