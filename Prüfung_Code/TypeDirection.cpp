
#include <conio.h>
#include <iostream>

#define VkLeft 37        //0x25  //=37
//#define VkUp 38        //0x26  //=38
#define VkRight 39       //0x27  //=39
//#define Vkdown  40     //0x28  //=40


using namespace std;
int main ()

{
    int kbdown;

    while (1)
    {
        kbdown = getch();
    
    if (kbdown == 224 )
    {
        kbdown = getch();

        switch (kbdown)
        {
        case VkLeft:
            cout << "left pressed" << endl;
            break;

        //case VkUp:
        //    cout << "up pressed" << endl;
        //    break;

        case VkRight:
            cout << "right pressed" << endl;
            break;

        //case Vkdown:
        //    cout << "down pressed" << endl;
        //    break;

        default:
            break;
        }
    }
    
    //return 0;
    }
}




