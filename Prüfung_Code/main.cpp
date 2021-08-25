/*Neme des Project: SomeOneWannerCutTheTree
* me: Yiming Dong AKA MAjor
* Date: 01-08-2021
* 
*Hiermit erkläre ich, dass ich die vorliegende Arbeit selbstständig und nur unter Verwendung der angegebenen Literatur und Hilfsmittel angefertigt habe.

Stellen, die wörtlich oder sinngemäß aus Quellen entnommen wurden, sind als solche kenntlich gemacht.

Diese Arbeit wurde in gleicher oder ähnlicher Form noch keiner anderen Prüfungsbehörde vorgelegt.

ort, den 28.09.2021

unterschrift Yiming Dong

Zuletzt geändert: Donnerstag, 15. Juli 2021, 16:20
*
*/





#include <iostream>
#include <cmath>
#include <ctime>
//*设置字符宽度和高度*/
#include <iomanip>
#include <string>
#include <stdlib.h>
//*是读取键盘方向键所需*/
#include<conio.h>

//**设定游戏人物高度为8行*/
#define player_H 8
//**设定游戏人物宽度为18列*/
#define player_W 18
//**设定一节树的高度为8行*/
#define tree_H 8 
//**设定树宽为18*/
#define tree_W 18
//**设定树叶高度和树高同高*/
#define leaf_H tree_H
//**设定树叶宽度10*/
#define leaf_W 10

#define left 0

#define right 1

using namespace std;

//设定一个玩家砍树的类
/*class Player_cut {
        string cut_lift, cut_right;//从左砍树 从右砍树
    public:
        void type_L_R (char , char)//输入方向键 需要键盘码 对应头文件 #include<conio.h>
        
};
*/

string player_stop_left [] ={ 
   "      ###      " ,
    "[   ]#####     " ,
    "  | _|- -|_    " ,
    "  |//\\_//\\   ",
    "  ||_______|   ",
    "   |___|___|   " 
};

string player_stop_right []={
    "       ###      ",
    "      #####[   ]",
    "     _|- -|_ |  ",
    "    //\\_//\\|  ",
    "    |_______||  ",
    "    |___|___|   "
};

string player_cutting_left [] = {
    "      ###      ",
    "     #####     ",
    "    _|o o|_    ",
    "   /  \\_/ \\   ",
    "   |___      ===",
    "   |___|___|   "

};

string player_cutting_right [] = {
    "       ###      ",
    "      #####     ",
    "     _|o o|_    ",
    "    /  \\_/  \\   ",
    "==----   ___|   ",
    "    |___|___|   "

};

string tree_base  []={

    "|             |",
    "|             }",
    "{             |",
    "|             }",
    "|             |",
    "{             }"

};

string leaf_left [] = {
    "     oOo",
    "     / oO",
    "   /--00oO",
    "--<   OOo ",
    "   \\oOO"
};

string leaf_right [] = {
    "   o  o    ",
    " o0Oo--\\   ",
    "O0Oo  --\\  ",
    "oOOOo  /->-",
    "  o0O-/    "

};


int main(void)
{
    for(string &str : player_stop_left)
        cout << str << endl;
    
    for(string &str : player_stop_right)
        cout << str << endl;

    for(string &str : player_cutting_left)
        cout << str << endl;

    for(string &str : player_cutting_right)
        cout << str << endl;

    for(string &str : tree_base)
        cout << str << endl;

    for(string &str : leaf_left)
        cout << str << endl;

    for(string &str : leaf_right)
        cout << str << endl;      

    

    return 0;
}