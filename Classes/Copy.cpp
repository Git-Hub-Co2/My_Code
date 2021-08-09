#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int Wert_Grundattribute [1];

    int MaxWert = Wert_Grundattribute[0];
        int MaxWert_Index = 0;
        for (int i = 1 ; i <5 ; i++){
        if (MaxWert < Wert_Grundattribute[i]){
            MaxWert = Wert_Grundattribute[i];
            MaxWert_Index = i;
        }
    }
    cin.get() ;
}
