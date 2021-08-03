#include <iostream>

using namespace std;

int main()
{
    int num;
    char ch;
    cout << "give me a num oder word: ";//123abc
    cin >> num;
    cin >> ch;
    cout << num << "\t" << ch << endl;//123    a
    cin.get();

}