//这个程序并不能执行！！！！！！！03/08/2021
#include <iostream>
#include <iomanip>

using namespace std;

int mian()
{
    char word = '\0';
    cout << "What kind of Date wodle u want to know?" << '\n';
    //将用户输入的文字赋新值给word
    cin >> word;
    cout << "This is " << sizeof(word) << "Bit." << endl;
    
    return 0 ;
}