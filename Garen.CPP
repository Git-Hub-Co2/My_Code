#include <iostream>
//#include <windouws.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //Cmd TItle SetConsoleTitle("Hi,Love U!")//
    //数据来源https://leagueoflegends.fandom.com/wiki/Garen/LoL
    /**Attack_damage*/
    double numDPS = 57.88 ,
    /**Armor*/
    numArmor = 27.54, 
    /**Magic_resist*/
    numMagicArma = 32.10, 
    /**Health*/
    numHp = 616.28, 
    /**Health_regen(per_5s)*/
    numRelif = 7.84,
    /**Resource*/
    numMagic = 0,
    /**Resource_regen.*/
    numREMagic = 0,
    /**AttackSpeed*/
    numBaseAs = 0.625;

    /**Move_speed*/
    int numSpeed = 340,

    numGold = 1000, 

    numMoney = 450,
    /**Acq. radius*/
    numAtk_Radius =172;

    cout << fixed << setprecision(2);
    cout << setw(8) << "Name: Gean(Level:1-18)" << endl;
    cout << "Attack damage:" << numDPS <<"(+4.50)\t" << "Acq. radius:" << numAtk_Radius << endl;
    cout << "Armor: " << numArmor << "(+3.00)\t" << "Magicresist: " << numMagicArma <<  endl;
    cout << "HP: " << numHp << "(+84.25)\t" << "Health regen: " << numRelif << endl;
    cout << "Resource: " << numMagic << "(+0.00)\t" <<"Resource REGEN: " << numREMagic <<endl;
    cout << "Move Speed: " << numSpeed << "\t\t" << "Station: Top,Sup,Jug." << endl;
    cout << "Money: " << numMoney << "\t\t" << "Gold: " << numGold << endl;
    
    
    
    
    cin.get();
 
}