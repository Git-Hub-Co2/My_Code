#include <iostream>
//#include <windouws.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //Cmd TItle
    //SetConsoleTitle("Hi,Love U!")
    double numDPS = 57.88 , numArma = 27.54, 
    numMagicArma = 32.10, numHp = 616.28, numRelif = 7.84,
    numMagic = 0, numREMagic = 0;
    int numSpeed = 340,numGold = 1000, numMoney = 450 ,numAtk =172;

    cout << fixed << setprecision(2);
    cout << "Name: Gean" << endl;
    cout << "Dps:" << numDPS <<"(+4.50)\t" << "abstand:" << numAtk << endl;
    cout << "Arma: " << numArma << "(+3.00)\t" << "MagicArma: " << numMagicArma <<  endl;
    cout << "HP: " << numHp << "(+84.25)\t" << "Relife: " << numRelif << endl;
    cout << "Magic: " << numMagic << "(+0.00)\t" <<"MagicRE: " << numREMagic <<endl;
    cout <<"Sprrd: " << numSpeed << "\t\t" << "Station: Top,Sup,Jug." << endl;
    cout << "Money: " << numMoney << "\t\t" << "Gold: " << numGold << endl;
    
    
    
    
    cin.get();
 
}