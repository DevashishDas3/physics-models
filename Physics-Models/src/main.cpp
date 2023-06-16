#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

// Devashish Das
// ALL UNITS ARE STANDARD

#define g 9.8
#define planckh 0.62607015 * pow(10, -34)
#define c 299,792,458

double hz_photon;
double energy_photon;

double energy_of_photon(){

    cout << "Enter wave frequency: ";
    cin >> hz_photon;

    energy_photon = hz_photon * planckh;

    // cout << "Energy of photon: " << energy_photon << " Joules" << endl;
    return energy_photon;
}

double momentum_of_photon(){
    energy_of_photon();
    
}

int main()
{
    cout << energy_of_photon() * 3<< endl;
}