#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
    // control show digital
    //1.show in float
    cout << fixed ;
    //2.show how much float number 0.00(2) 0.000000(6)
    cout << setprecision(2);
    //cout duble Deta
    double double_num = pow(10,4) / 3.0;
    cout << double_num  << endl;// 3.33333 
    cin.get();//get ur tyep word
}