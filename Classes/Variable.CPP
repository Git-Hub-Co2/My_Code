#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1 = 5, num2 =2;
    //def 2 numbers
    double result1 = num1 / num2;   //Divison result1 = (double) num1/num2 = 2.5
    double result2 = num1 % num2;   //Rest
    double result3 = num1++;        //
    double result4 = --num2;        //
    double result5 = num2++;
    double result6 = result5 - result4;

    cout << "num1 / num2 = " << result1 <<endl;
    cout << "num1 % num2 = " << result2 <<endl;
    cout << "num1++ = " << result3 << "\n";
    cout << "--num2 = " << result4 << endl;
    
    cout << "num2++ = " << result5 << endl;
    cout << "(num2++) - (--num2) = " << result6 << endl;
    
    return 0;

}