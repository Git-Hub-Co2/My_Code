#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //单浮点与双浮点精度对比
    float numFloat = 10/ 3.0f;//浮点数后加f
    double numDouble = 10 / 3.0f;
    cout << fixed << setprecision(2); //fixed 设定输出结果永远为浮点数
    //setprecision(2)设定浮点数小数点后显示几位，此处为显示小数点后2位
    cout << "numFloart = " << numFloat * 100000000 << endl;//计算
    cout << "numDouble = " << numDouble * 100000000 << endl;
    cin.get();

}