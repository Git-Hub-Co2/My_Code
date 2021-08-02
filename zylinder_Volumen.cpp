/*
geg: Height und Radio
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float Radius = 2.5f ;
    float Height = 4.0f ;
    //zylinder Vloumen = Gerundzone * height
    // const float PI=3.1415f; //def : float constant 
    float Vloume = 3.1415 * pow(Radius,2) * (Height);
    // pow(x,y) that mains x^y
    cout << "Vloume des Zylinders:" << Vloume << "mm^2" << endl;
    return 0;
}