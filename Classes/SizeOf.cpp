#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   //sizeof() 用来测量字符的长度
    cout << setw(32)  << "sizeof(char) = " << sizeof(char) <<'\n';
    cout << setw(32)  << "sizeof(short) = " << sizeof(short) << '\n';
    cout << setw(32)  << "sizeof(int) = " << sizeof(int) <<'\n';
    cout << setw(32)  << "sizeof(long) = " << sizeof(long) << '\n';
    cout << setw(32)  << "sizeof(long long) = " << sizeof(long long) << '\n';
    cout << setw(32)  << "sizeof(float) = " << sizeof(float) << '\n';
    cout << setw(32)  << "sizeof(double) = " << sizeof(double)<<'\n';
    cout << setw(32)  <<"sizeof(long double) = " << sizeof(long double) <<endl;

    return 0;


}